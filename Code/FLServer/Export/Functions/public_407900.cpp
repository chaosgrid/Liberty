#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407900);
CLANG_FORWARD_PROC_SYMBOL(public_407ab0);
CLANG_FORWARD_PROC_SYMBOL(public_407cd0);
CLANG_FORWARD_PROC_SYMBOL(public_4080d0);
CLANG_FORWARD_PROC_SYMBOL(public_408550);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_407930 _public_407930
#define public_40794f _public_40794f
#define public_407974 _public_407974
#define public_407978 _public_407978
#define public_407998 _public_407998

PROC_DECLARE(0x407900, internal_407900, public_407900);
extern "C" NAKED register_t __cdecl internal_407900()
{
    __asm
    {
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
        je public_407974
        mov ecx, eax
        cmp eax, ecx
        jne public_407974
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_40794f
        nop 
        lea esp, ss:[esp]
        public_407930 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4080d0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_407930
        public_40794f : nop
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
        call public_407ab0
        jmp public_407998
        public_407974 : nop
        cmp eax, edi
        je public_407998
        public_407978 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_408550
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_407cd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_407978
        public_407998 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_418978
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x407900)
    }
}

#undef public_407930
#undef public_40794f
#undef public_407974
#undef public_407978
#undef public_407998
