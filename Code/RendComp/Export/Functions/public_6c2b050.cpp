#include "RendComp-PCH.h"


#define public_6c2b074 _public_6c2b074
#define public_6c2b0c0 _public_6c2b0c0
#define public_6c2b0ca _public_6c2b0ca
#define public_6c2b0e9 _public_6c2b0e9
#define public_6c2b0f3 _public_6c2b0f3

PROC_DECLARE(0x6c2b050, internal_6c2b050, public_6c2b050);
extern "C" NAKED register_t __cdecl internal_6c2b050()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6c2b0f3
        mov eax, dword ptr ds : [esi+8]
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0x14], 0
        jbe public_6c2b0e9
        push ebx
        push edi
        public_6c2b074 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x14]
        lea edi, ds:[ebp*4]
        mov ebx, dword ptr ds : [edi+eax]
        mov eax, dword ptr ds : [edi+ecx]
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6c36008]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        add ecx, edi
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        test eax, eax
        je public_6c2b0c0
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+edx], 0
        mov byte ptr ss : [esp+0x1C], 1
        public_6c2b0c0 : nop
        test ebx, ebx
        je public_6c2b0ca
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+8]
        public_6c2b0ca : nop
        mov eax, dword ptr ds : [esi+8]
        inc ebp
        cmp ebp, eax
        jb public_6c2b074
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        pop edi
        pop ebx
        je public_6c2b0e9
        pop esi
        mov eax, 0xFFFFFFFF
        pop ebp
        add esp, 8
        ret 4
        public_6c2b0e9 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 4
        public_6c2b0f3 : nop
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6c2b050)
    }
}

#undef public_6c2b074
#undef public_6c2b0c0
#undef public_6c2b0ca
#undef public_6c2b0e9
#undef public_6c2b0f3
