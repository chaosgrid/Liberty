#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_410880);
CLANG_FORWARD_PROC_SYMBOL(public_410fc0);
CLANG_FORWARD_PROC_SYMBOL(public_411390);
CLANG_FORWARD_PROC_SYMBOL(public_411b50);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40fbf0 _public_40fbf0
#define public_40fc0f _public_40fc0f
#define public_40fc34 _public_40fc34
#define public_40fc38 _public_40fc38
#define public_40fc58 _public_40fc58

PROC_DECLARE(0x40fbc0, internal_40fbc0, public_40fbc0);
extern "C" NAKED register_t __cdecl internal_40fbc0()
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
        je public_40fc34
        mov ecx, eax
        cmp eax, ecx
        jne public_40fc34
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_40fc0f
        nop 
        lea esp, ss:[esp]
        public_40fbf0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_411390
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_40fbf0
        public_40fc0f : nop
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
        call public_410880
        jmp public_40fc58
        public_40fc34 : nop
        cmp eax, edi
        je public_40fc58
        public_40fc38 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_411b50
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_410fc0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_40fc38
        public_40fc58 : nop
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
        UNREACHABLE_TRAP(0x40fbc0)
    }
}

#undef public_40fbf0
#undef public_40fc0f
#undef public_40fc34
#undef public_40fc38
#undef public_40fc58
