#include "Server-PCH.h"


#define public_6cff07f _public_6cff07f
#define public_6cff094 _public_6cff094
#define public_6cff0a0 _public_6cff0a0
#define public_6cff0a2 _public_6cff0a2
#define public_6cff0c4 _public_6cff0c4
#define public_6cff0d0 _public_6cff0d0

PROC_DECLARE(0x6cff050, internal_6cff050, public_6cff050);
extern "C" NAKED register_t __cdecl internal_6cff050()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18]
        test al, al
        mov edi, dword ptr ss : [esp+0x10]
        jne public_6cff07f
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        push 0xBF800000
        push eax
        push edi
        lea eax, ds:[esi+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x1E4]
        public_6cff07f : nop
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edi
        je public_6cff0a0
        public_6cff094 : nop
        cmp word ptr ds : [eax], di
        je public_6cff0a2
        add eax, 2
        cmp eax, ecx
        jne public_6cff094
        public_6cff0a0 : nop
        mov eax, ecx
        public_6cff0a2 : nop
        cmp eax, ecx
        jne public_6cff0d0
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641b4]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cff0d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6cff0c4 : nop
        cmp word ptr ds : [eax], cx
        je public_6cff0d0
        add eax, 2
        cmp eax, esi
        jne public_6cff0c4
        public_6cff0d0 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cff050)
    }
}

#undef public_6cff07f
#undef public_6cff094
#undef public_6cff0a0
#undef public_6cff0a2
#undef public_6cff0c4
#undef public_6cff0d0
