#include "Content-PCH.h"


#define public_6f71a50 _public_6f71a50
#define public_6f71a74 _public_6f71a74
#define public_6f71a90 _public_6f71a90
#define public_6f71a9c _public_6f71a9c
#define public_6f71ab0 _public_6f71ab0
#define public_6f71ae3 _public_6f71ae3

PROC_DECLARE(0x6f71a30, internal_6f71a30, public_6f71a30);
extern "C" NAKED register_t __cdecl internal_6f71a30()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_6f71ae3
        push ebx
        push ebp
        push edi
        lea edi, ds:[esi+4]
        mov ebx, offset public_6fb7620
        lea esp, ss:[esp]
        public_6f71a50 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 2
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [esi+0x48]
        cmp edi, dword ptr ds : [esi+0x4C]
        je public_6f71ab0
        lea ebp, ds:[edi+4]
        public_6f71a74 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, ebp
        cmp eax, ecx
        je public_6f71a9c
        mov edx, edi
        sub edx, ebp
        nop 
        lea esp, ss:[esp]
        public_6f71a90 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebx
        add eax, 4
        cmp eax, ecx
        jne public_6f71a90
        public_6f71a9c : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x4C], ecx
        jne public_6f71a74
        mov ebx, offset public_6fb7620
        public_6f71ab0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        lea edi, ds:[esi+4]
        push edi
        lea eax, ss:[esp+0x1C]
        mov dword ptr ds : [edi], ecx
        push eax
        mov ecx, esi
        mov byte ptr ds : [esi+0xC], 0
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [edx+8]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        jne public_6f71a50
        pop edi
        pop ebp
        pop ebx
        public_6f71ae3 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f71a30)
    }
}

#undef public_6f71a50
#undef public_6f71a74
#undef public_6f71a90
#undef public_6f71a9c
#undef public_6f71ab0
#undef public_6f71ae3
