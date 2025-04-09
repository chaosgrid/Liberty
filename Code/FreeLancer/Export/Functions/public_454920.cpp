#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4539b0);
CLANG_FORWARD_PROC_SYMBOL(public_454920);
CLANG_FORWARD_PROC_SYMBOL(public_456b90);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9f78);

#define public_454b50 _public_454b50
#define public_454b74 _public_454b74
#define public_454b86 _public_454b86
#define public_454b9b _public_454b9b

PROC_DECLARE(0x454920, internal_454920, public_454920);
extern "C" NAKED register_t __cdecl internal_454920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9f78 @0x454922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9f78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xD4]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov byte ptr ds : [edi+8], bl
        mov byte ptr ds : [edi+9], bl
        mov byte ptr ds : [edi+0xA], bl
        mov byte ptr ds : [edi+0xB], bl
        mov byte ptr ds : [edi+0xC], bl
        mov byte ptr ds : [edi+0xD], bl
        mov byte ptr ds : [edi+0xE], bl
        mov byte ptr ds : [edi+0xF], bl
        mov byte ptr ds : [edi+0x10], bl
        mov byte ptr ds : [edi+0x11], bl
        mov byte ptr ds : [edi+0x12], bl
        mov byte ptr ds : [edi+0x13], bl
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x15], bl
        lea ebp, ds:[esi+0xEC]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ss : [ebp+8], bl
        mov byte ptr ss : [ebp+9], bl
        mov byte ptr ss : [ebp+0xA], bl
        mov byte ptr ss : [ebp+0xB], bl
        mov byte ptr ss : [ebp+0xC], bl
        mov byte ptr ss : [ebp+0xD], bl
        mov byte ptr ss : [ebp+0xE], bl
        mov byte ptr ss : [ebp+0xF], bl
        mov byte ptr ss : [ebp+0x10], bl
        mov byte ptr ss : [ebp+0x11], bl
        mov byte ptr ss : [ebp+0x12], bl
        mov byte ptr ss : [ebp+0x13], bl
        mov byte ptr ss : [ebp+0x14], bl
        mov byte ptr ss : [ebp+0x15], bl
        lea ecx, ds:[esi+0x114]
        mov byte ptr ss : [esp+0x38], 1
        call public_4539b0
        mov al, byte ptr ss : [esp+0x13]
        push 0x1C
        mov byte ptr ss : [esp+0x3C], 2
        mov byte ptr ds : [esi+0x124], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x128], eax
        mov dword ptr ds : [esi+0x12C], ebx
        mov cl, byte ptr ss : [esp+0x17]
        push 0x1C
        mov byte ptr ss : [esp+0x40], 3
        mov byte ptr ds : [esi+0x130], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 8
        mov dword ptr ds : [esi+0x134], eax
        mov dword ptr ds : [esi+0x138], ebx
        mov byte ptr ss : [esp+0x38], 4
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+4], bl
        mov byte ptr ds : [esi+5], bl
        mov byte ptr ds : [esi+6], 1
        mov byte ptr ds : [esi+7], bl
        mov byte ptr ds : [esi+8], 1
        mov byte ptr ds : [esi+9], 1
        mov byte ptr ds : [esi+0xA], bl
        mov byte ptr ds : [esi+0xB], bl
        mov byte ptr ds : [esi+0xC], bl
        mov byte ptr ds : [esi+0xD], bl
        lea eax, ds:[esi+0x34]
        mov ecx, ebx
        mov byte ptr ds : [esi+0xE], 1
        mov byte ptr ds : [esi+0xF], 1
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], 1
        mov byte ptr ds : [esi+0x16], bl
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ds : [esi+0x2F], bl
        mov byte ptr ds : [esi+0x2D], bl
        mov byte ptr ds : [esi+0x2E], bl
        mov byte ptr ds : [esi+0x2C], 1
        mov byte ptr ds : [esi+0x30], bl
        mov dword ptr ds : [esi+0x6C], ebx
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        lea ecx, ds:[eax+0xC]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_4215b0
        mov ecx, edi
        mov dword ptr ds : [esi+0x64], ebx
        mov byte ptr ds : [esi+0xAC], bl
        mov byte ptr ds : [esi+0xAD], bl
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], 0xFFFFFFFF
        mov byte ptr ds : [esi+0xC4], bl
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        call dword ptr ds : [public_5c6288]
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, ebp
        call dword ptr ds : [public_5c6288]
        xor eax, eax
        mov edi, ebp
        mov ecx, 6
        rep stosd
        mov byte ptr ds : [esi+0x104], bl
        mov byte ptr ds : [esi+0x105], bl
        mov byte ptr ds : [esi+0x106], bl
        mov dword ptr ds : [esi+0x108], ebx
        mov byte ptr ds : [esi+0x10C], bl
        mov byte ptr ds : [esi+0x10D], bl
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x120], ebx
        mov edi, dword ptr ds : [esi+0x134]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea ebp, ds:[esi+0x130]
        mov dword ptr ss : [esp+0x14], eax
        je public_454b74
        lea esp, ss:[esp]
        public_454b50 : nop
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_456b90
        cmp dword ptr ss : [esp+0x14], edi
        jne public_454b50
        public_454b74 : nop
        mov ebx, dword ptr ds : [esi+0x128]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0x124]
        je public_454b9b
        public_454b86 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_456b90
        cmp edi, ebx
        jne public_454b86
        public_454b9b : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x454920)
    }
}

#undef public_454b50
#undef public_454b74
#undef public_454b86
#undef public_454b9b
