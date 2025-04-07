#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_6302870);
CLANG_FORWARD_PROC_SYMBOL(public_6302d50);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6302880 _public_6302880
#define public_63028b0 _public_63028b0
#define public_63028cf _public_63028cf
#define public_63028f4 _public_63028f4
#define public_63028f8 _public_63028f8
#define public_6302918 _public_6302918

PROC_DECLARE(0x6302870, internal_6302870, public_6302870);
extern "C" NAKED register_t __cdecl internal_6302870()
{
    __asm
    {
        mov ecx, offset public_63fcc58
        jmp public_6302880
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6302880 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_63028f4
        mov ecx, eax
        cmp eax, ecx
        jne public_63028f4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_63028cf
        nop 
        lea esp, ss:[esp]
        public_63028b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6302d50
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_63028b0
        public_63028cf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6302918
        public_63028f4 : nop
        cmp eax, edi
        je public_6302918
        public_63028f8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_63028f8
        public_6302918 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6302870)
    }
}

#undef public_6302880
#undef public_63028b0
#undef public_63028cf
#undef public_63028f4
#undef public_63028f8
#undef public_6302918
