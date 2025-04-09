#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534010);
CLANG_FORWARD_PROC_SYMBOL(public_539c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_534030 _public_534030
#define public_534041 _public_534041
#define public_53404f _public_53404f
#define public_534076 _public_534076
#define public_53407e _public_53407e
#define public_534090 _public_534090
#define public_53409c _public_53409c

PROC_DECLARE(0x534010, internal_534010, public_534010);
extern "C" NAKED register_t __cdecl internal_534010()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push ebp
        mov edi, ecx
        call public_539c60
        mov eax, dword ptr ds : [edi+0xB8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_53407e
        lea esp, ss:[esp]
        public_534030 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax+8]
        test al, al
        je public_534041
        mov esi, dword ptr ds : [esi]
        jmp public_534076
        public_534041 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_53404f
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_53404f : nop
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0xBC]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0xBC], eax
        mov esi, ebx
        public_534076 : nop
        cmp esi, dword ptr ds : [edi+0xB8]
        jne public_534030
        public_53407e : nop
        mov edi, dword ptr ds : [edi+0xC4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_53409c
        mov ebx, dword ptr ds : [public_5c6968]
        public_534090 : nop
        push ebp
        lea ecx, ds:[esi+8]
        call ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_534090
        public_53409c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x534010)
    }
}

#undef public_534030
#undef public_534041
#undef public_53404f
#undef public_534076
#undef public_53407e
#undef public_534090
#undef public_53409c
