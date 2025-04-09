#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437cd0);
CLANG_FORWARD_PROC_SYMBOL(public_438520);
CLANG_FORWARD_PROC_SYMBOL(public_4388f0);
CLANG_FORWARD_PROC_SYMBOL(public_438930);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_437d00 _public_437d00
#define public_437d1f _public_437d1f
#define public_437d44 _public_437d44
#define public_437d48 _public_437d48
#define public_437d68 _public_437d68

PROC_DECLARE(0x437cd0, internal_437cd0, public_437cd0);
extern "C" NAKED register_t __cdecl internal_437cd0()
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
        je public_437d44
        mov ecx, eax
        cmp eax, ecx
        jne public_437d44
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_437d1f
        nop 
        lea esp, ss:[esp]
        public_437d00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4388f0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_437d00
        public_437d1f : nop
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
        call public_53e430
        jmp public_437d68
        public_437d44 : nop
        cmp eax, edi
        je public_437d68
        public_437d48 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_438930
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_438520
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_437d48
        public_437d68 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x437cd0)
    }
}

#undef public_437d00
#undef public_437d1f
#undef public_437d44
#undef public_437d48
#undef public_437d68
