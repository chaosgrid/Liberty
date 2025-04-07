#include "Common-PCH.h"


#define public_6328053 _public_6328053
#define public_6328068 _public_6328068
#define public_63280b5 _public_63280b5
#define public_63280c2 _public_63280c2

PROC_DECLARE(0x6328030, internal_6328030, public_6328030);
extern "C" NAKED register_t __cdecl internal_6328030()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        xor ecx, ecx
        cmp ebp, ecx
        jne public_6328053
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        pop ebp
        add esp, 0x10
        ret 0xC
        public_6328053 : nop
        cmp dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_6328068
        push ebp
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        public_6328068 : nop
        push ebx
        mov ebx, dword ptr ds : [edi+0x3C]
        push esi
        movzx esi, byte ptr ds : [edi+0x1C]
        imul esi, 0x7C
        add esi, offset public_6401968
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        push ebx
        call dword ptr ds : [public_6399088]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi+0x3C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push ebp
        push edx
        call dword ptr ds : [public_6399098]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x28]
        je public_63280b5
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], edx
        jmp public_63280c2
        public_63280b5 : nop
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        public_63280c2 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebx
        call dword ptr ds : [public_6399088]
        pop esi
        pop ebx
        pop edi
        pop ebp
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6328030)
    }
}

#undef public_6328053
#undef public_6328068
#undef public_63280b5
#undef public_63280c2
