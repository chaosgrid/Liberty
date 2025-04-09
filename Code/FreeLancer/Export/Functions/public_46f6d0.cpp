#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_46f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4708d0);
CLANG_FORWARD_PROC_SYMBOL(public_470920);
CLANG_FORWARD_PROC_SYMBOL(public_470b30);
CLANG_FORWARD_PROC_SYMBOL(public_470bf0);
CLANG_FORWARD_PROC_SYMBOL(public_470c90);
CLANG_FORWARD_PROC_SYMBOL(public_4a2310);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb9b0);

#define public_46f747 _public_46f747
#define public_46f876 _public_46f876
#define public_46f896 _public_46f896
#define public_46f89c _public_46f89c
#define public_46f955 _public_46f955
#define public_46f973 _public_46f973
#define public_46f9df _public_46f9df
#define public_46f9fb _public_46f9fb
#define public_46f9ff _public_46f9ff
#define public_46fa2b _public_46fa2b
#define public_46fa3d _public_46fa3d

PROC_DECLARE(0x46f6d0, internal_46f6d0, public_46f6d0);
extern "C" NAKED register_t __cdecl internal_46f6d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ds : [public_66dac0]
        push 0xFFFFFFFF
/*FIXUP push public_5bb9b0 @0x46f6de*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb9b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66dac4]
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push ebx
        push esi
        push eax
        push ecx
        mov ecx, offset public_66dabc
        call public_4708d0
        mov ecx, offset public_66daa4
        call public_470bf0
        mov esi, dword ptr ds : [public_66da94]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_66da90
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_66da90
        call public_470b30
        call dword ptr ds : [public_5c6334]
        mov esi, eax
        xor ebx, ebx
        cmp esi, ebx
        je public_46fa3d
        push ebp
        push edi
        public_46f747 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [edx+0x10]
        push eax
        call dword ptr ds : [public_5c6094]
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_46fa2b
        cmp dword ptr ss : [esp+0x14], ebx
        je public_46fa2b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        push eax
        call public_4a2310
        add esp, 4
        test al, al
        je public_46fa2b
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x1A]
        push ecx
        push edx
        mov byte ptr ss : [esp+0x22], bl
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov cl, byte ptr ss : [esp+0x12]
        or cl, al
        test cl, 4
        mov byte ptr ss : [esp+0x12], cl
        je public_46fa2b
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_66da90
        call public_432240
        mov eax, dword ptr ds : [public_66da94]
        cmp dword ptr ss : [esp+0x18], eax
        jne public_46f896
        mov eax, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [edi]
        push eax
/*FIXUP push offset public_66fc60 @0x46f7ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        push 0xFFFFFFFF
/*FIXUP push offset public_66fc60 @0x46f807*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_413df0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x28]
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ecx
        push edx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        call public_413df0
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, offset public_66da90
        mov byte ptr ss : [esp+0x7C], 1
        call public_470920
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_46f876
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        public_46f876 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        je public_46f89c
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        jmp public_46f89c
        public_46f896 : nop
        mov edi, dword ptr ds : [public_5c71d8]
        public_46f89c : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_66daa4
        call public_432240
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_66daa8]
        mov dword ptr ss : [esp+0x18], eax
        jne public_46f973
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_66fc60 @0x46f8cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        push 0xFFFFFFFF
/*FIXUP push offset public_66fc60 @0x46f8e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        call public_413df0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x30]
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x58], ecx
        push edx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x7C], 2
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        call public_413df0
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, offset public_66daa4
        mov byte ptr ss : [esp+0x7C], 3
        call public_470920
        mov eax, dword ptr ss : [esp+0x58]
        cmp eax, ebx
        je public_46f955
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        public_46f955 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        je public_46f973
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_46f973 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_5c615c]
        mov ecx, eax
        call dword ptr ds : [public_5c6330]
        cmp eax, ebx
        je public_46fa2b
        lea esi, ds:[eax+0x10]
        cmp esi, ebx
        je public_46fa2b
        mov eax, dword ptr ss : [esp+0x7C]
        push eax
        call dword ptr ds : [public_5c632c]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        xor edi, edi
        mov byte ptr ss : [esp+0x1B], 1
        call public_432240
        mov ebp, dword ptr ss : [esp+0x24]
        cmp ebp, dword ptr ds : [esi+4]
        je public_46f9df
        fld dword ptr ss : [ebp+0x14]
        call public_5b7ec0
        mov edi, eax
        cmp dword ptr ss : [ebp+0x1C], ebx
        jne public_46f9ff
        jmp public_46f9fb
        public_46f9df : nop
        mov eax, dword ptr ss : [esp+0x7C]
        push eax
        call dword ptr ds : [public_5c629c]
        add esp, 4
        cmp eax, ebx
        je public_46f9ff
        fld dword ptr ds : [eax+0x58]
        call public_5b7ec0
        mov edi, eax
        public_46f9fb : nop
        mov byte ptr ss : [esp+0x13], bl
        public_46f9ff : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dl, byte ptr ss : [esp+0x13]
        lea eax, ss:[esp+0x60]
        push eax
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ds : [public_66dac4]
        push 1
        push ecx
        mov ecx, offset public_66dabc
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x74], dl
        call public_470c90
        public_46fa2b : nop
        call dword ptr ds : [public_5c6328]
        mov esi, eax
        cmp esi, ebx
        jne public_46f747
        pop edi
        pop ebp
        public_46fa3d : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x46f6d0)
    }
}

#undef public_46f747
#undef public_46f876
#undef public_46f896
#undef public_46f89c
#undef public_46f955
#undef public_46f973
#undef public_46f9df
#undef public_46f9fb
#undef public_46f9ff
#undef public_46fa2b
#undef public_46fa3d
