#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_580190);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4240);

#define public_58021f _public_58021f
#define public_58022f _public_58022f

PROC_DECLARE(0x580190, internal_580190, public_580190);
extern "C" NAKED register_t __cdecl internal_580190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4240 @0x580192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4240
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5e4984
        mov dword ptr ds : [esi+0x7C], offset public_5e4978
        lea edi, ds:[esi+0x32C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 4
        call public_59eee0
        lea ebp, ds:[esi+0x474]
        mov ecx, ebp
        call public_59eee0
        lea ebx, ds:[esi+0x3D0]
        mov ecx, ebx
        call public_59eee0
        lea ecx, ds:[esi+0x518]
        call public_59eee0
        mov al, byte ptr ds : [esi+0x674]
        test al, al
        jne public_58021f
        mov al, byte ptr ds : [esi+0x675]
        test al, al
        jne public_58021f
        mov al, byte ptr ds : [esi+0x676]
        test al, al
        jne public_58021f
        mov al, byte ptr ds : [esi+0x677]
        test al, al
        je public_58022f
        public_58021f : nop
        push esi
        call public_59d960
        add esp, 4
        mov byte ptr ds : [public_67c4c4], 0
        public_58022f : nop
        lea ecx, ds:[esi+0x518]
        mov byte ptr ss : [esp+0x1C], 3
        call public_59ef20
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 2
        call public_59ef20
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 1
        call public_59ef20
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0
        call public_59ef20
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x580190)
    }
}

#undef public_58021f
#undef public_58022f
