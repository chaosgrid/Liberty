#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8120);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);

#define public_4dcffd _public_4dcffd

PROC_DECLARE(0x4dcf80, internal_4dcf80, public_4dcf80);
extern "C" NAKED register_t __cdecl internal_4dcf80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8484]
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x224], eax
        mov al, byte ptr ds : [esi+0x16C]
        test al, al
        jne public_4dcffd
        mov edx, dword ptr ds : [esi-0x364]
        push edi
        lea ecx, ds:[esi-0x364]
        push 1
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [esi+0x164]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x238]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [public_5d8488]
        lea edi, ds:[esi+0x17C]
        push eax
        mov ecx, edi
        call public_55e590
        mov ecx, dword ptr ds : [esi+0x168]
        push 0x3F800000
        push 0x3DCCCCCD
        push ecx
        mov ecx, edi
        call public_55e360
        mov ecx, edi
        pop edi
        pop esi
        add esp, 0xC
        jmp public_55e5e0
        public_4dcffd : nop
        push 0
        push 2
        mov byte ptr ds : [esi+0x16C], 0
        call public_4c8120
        lea edx, ds:[esi-0x278]
        mov dword ptr ss : [esp+0xC], 0x3DD70A3D
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0x3CA3D70A
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        add esp, 8
        add esi, 0xFFFFFD94
        mov dword ptr ss : [esp+4], 0x3ECCCCCD
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [esi], ecx
        mov dword ptr ss : [esp+8], 0xBEBDF3B6
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4dcf80)
    }
}

#undef public_4dcffd
