#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_577c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_577c53 _public_577c53
#define public_577c74 _public_577c74
#define public_577c90 _public_577c90
#define public_577c9d _public_577c9d
#define public_577cbc _public_577cbc
#define public_577cc2 _public_577cc2
#define public_577ce0 _public_577ce0
#define public_577d1d _public_577d1d
#define public_577d3e _public_577d3e
#define public_577d48 _public_577d48

PROC_DECLARE(0x577c30, internal_577c30, public_577c30);
extern "C" NAKED register_t __cdecl internal_577c30()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [public_67c3ac], edx
        push esi
        push edi
        jne public_577c74
        mov ecx, dword ptr ds : [public_67c3a8]
        test ecx, ecx
        jne public_577c53
        pop edi
        mov dword ptr ds : [public_67c3ac], ecx
        pop esi
        pop ecx
        ret 
        public_577c53 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [public_67c3ac], eax
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_516f70
        jmp public_577cbc
        public_577c74 : nop
        mov edi, dword ptr ds : [public_67c3a8]
        test edi, edi
        je public_577d48
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_577cc2
        nop 
        lea esp, ss:[esp]
        public_577c90 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_577c9d
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_577c90
        jmp public_577cc2
        public_577c9d : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        public_577cbc : nop
        mov edi, dword ptr ds : [public_67c3a8]
        public_577cc2 : nop
        test edi, edi
        je public_577d48
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_577d48
        test edi, edi
        je public_577d3e
        push ebx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_577d1d
        nop 
        public_577ce0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], eax
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_577ce0
        public_577d1d : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        push edi
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        call public_5b7e1d
        add esp, 8
        pop ebx
        public_577d3e : nop
        mov dword ptr ds : [public_67c3a8], 0
        public_577d48 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x577c30)
    }
}

#undef public_577c53
#undef public_577c74
#undef public_577c90
#undef public_577c9d
#undef public_577cbc
#undef public_577cc2
#undef public_577ce0
#undef public_577d1d
#undef public_577d3e
#undef public_577d48
