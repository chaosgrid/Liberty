#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6becfb0);

#define public_6bdccc9 _public_6bdccc9
#define public_6bdccff _public_6bdccff
#define public_6bdcd30 _public_6bdcd30
#define public_6bdcd3c _public_6bdcd3c

PROC_DECLARE(0x6bdcc80, internal_6bdcc80, public_6bdcc80);
extern "C" NAKED register_t __cdecl internal_6bdcc80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [edi+4], ebp
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+0xC], 0
        mov edx, dword ptr ds : [esi+0x14]
        push edi
        push edx
        lea ebx, ds:[esi+0x18]
        push ebx
        mov ecx, esi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bdccc9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdccc9 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ebp
        push ecx
        mov ecx, esi
        call public_6becfb0
        test eax, eax
        jne public_6bdcd3c
        mov edx, dword ptr ds : [esi+0x14]
        push edi
        push edx
        push ebx
        mov ecx, esi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bdccff
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bdccff : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [edi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jbe public_6bdcd30
        mov dword ptr ds : [ecx+0x10], edi
        public_6bdcd30 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bdcd3c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bdcc80)
    }
}

#undef public_6bdccc9
#undef public_6bdccff
#undef public_6bdcd30
#undef public_6bdcd3c
