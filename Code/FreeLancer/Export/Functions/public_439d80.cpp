#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439d80);
CLANG_FORWARD_PROC_SYMBOL(public_43c550);
CLANG_FORWARD_PROC_SYMBOL(public_43c790);
CLANG_FORWARD_PROC_SYMBOL(public_43c9d0);
CLANG_FORWARD_PROC_SYMBOL(public_442060);
CLANG_FORWARD_PROC_SYMBOL(public_449260);
CLANG_FORWARD_PROC_SYMBOL(public_4496b0);
CLANG_FORWARD_PROC_SYMBOL(public_44aca0);
CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b93b9);

#define public_439dc6 _public_439dc6
#define public_439df9 _public_439df9
#define public_439e23 _public_439e23
#define public_439e57 _public_439e57
#define public_439e9a _public_439e9a
#define public_439ee3 _public_439ee3
#define public_439f09 _public_439f09
#define public_439f0b _public_439f0b
#define public_439f72 _public_439f72
#define public_439fc3 _public_439fc3
#define public_43a011 _public_43a011
#define public_43a016 _public_43a016
#define public_43a038 _public_43a038
#define public_43a052 _public_43a052

PROC_DECLARE(0x439d80, internal_439d80, public_439d80);
extern "C" NAKED register_t __cdecl internal_439d80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b93b9 @0x439d82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b93b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x10], eax
        call public_432240
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_439dc6
        mov esi, dword ptr ds : [ecx+0x10]
        jmp public_439df9
        public_439dc6 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x439de7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5caefc @0x439dec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        xor esi, esi
        public_439df9 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[edi+0x20]
        mov dword ptr ss : [esp+0x14], edx
        call public_432240
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_439e23
        mov eax, dword ptr ds : [ecx+0x10]
        jmp public_439e57
        public_439e23 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_411c50
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push 0x100
/*FIXUP push offset public_5caf30 @0x439e45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5caf78 @0x439e4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        public_439e57 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ds : [edx]
        push ebp
        push 0x48
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        xor eax, eax
        cmp ebp, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_439e9a
        mov ecx, ebp
        call public_43c550
        lea ecx, ss:[ebp+0x18]
        mov byte ptr ss : [esp+0x28], 1
        call public_43c790
        lea ecx, ss:[ebp+0x30]
        mov byte ptr ss : [esp+0x28], 2
        call public_43c9d0
        mov eax, ebp
        public_439e9a : nop
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [eax+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x18
        mov byte ptr ds : [eax+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x30
        mov byte ptr ds : [eax+0x14], 0
        mov al, byte ptr ds : [edi+0x5A]
        or ebp, 0xFFFFFFFF
        test al, al
        mov dword ptr ss : [esp+0x28], ebp
        jne public_439ee3
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_439ee3
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call dword ptr ds : [eax+0xA0]
        public_439ee3 : nop
        push 0x13AC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 3
        je public_439f09
        mov ecx, eax
        call public_449260
        jmp public_439f0b
        public_439f09 : nop
        xor eax, eax
        public_439f0b : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push ebx
        mov ecx, eax
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ds : [esi+8], eax
        call public_4496b0
        mov al, byte ptr ds : [edi+0x5A]
        test al, al
        pop ebp
        pop ebx
        jne public_43a052
        mov eax, dword ptr ds : [esi+4]
        push 0x42700000
        lea edi, ds:[eax+0x14]
        push 0x40A00000
        push edi
        call public_5a89b0
        add esp, 0xC
        cmp eax, 1
        je public_439f72
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb008 @0x439f50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb008
        push 0x108
/*FIXUP push offset public_5cafd8 @0x439f5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x439f64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov byte ptr ds : [edi], 0
        public_439f72 : nop
        cmp byte ptr ds : [edi], 0
        je public_43a016
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x18
        push 0x42700000
        lea edi, ds:[eax+0x14]
        push 0x40A00000
        push edi
        call public_5a89b0
        add esp, 0xC
        cmp eax, 1
        je public_439fc3
/*FIXUP push offset public_5cb008 @0x439f9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb008
        push 0x108
/*FIXUP push offset public_5cafd8 @0x439fa6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x439fb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov byte ptr ds : [edi], 0
        public_439fc3 : nop
        cmp byte ptr ds : [edi], 0
        je public_43a016
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x30
        push 0x42700000
        lea edi, ds:[eax+0x14]
        push 0x40A00000
        push edi
        call public_5a89b0
        add esp, 0xC
        cmp eax, 1
        je public_43a011
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb008 @0x439fef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb008
        push 0x108
/*FIXUP push offset public_5cafd8 @0x439ff9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x43a003*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov byte ptr ds : [edi], 0
        public_43a011 : nop
        cmp byte ptr ds : [edi], 0
        jne public_43a052
        public_43a016 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_43a038
        call public_5b2c50
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_43a038 : nop
        pop edi
        mov byte ptr ds : [public_67ecbe], 1
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_43a052 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_44aca0
        call public_442060
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x439d80)
    }
}

#undef public_439dc6
#undef public_439df9
#undef public_439e23
#undef public_439e57
#undef public_439e9a
#undef public_439ee3
#undef public_439f09
#undef public_439f0b
#undef public_439f72
#undef public_439fc3
#undef public_43a011
#undef public_43a016
#undef public_43a038
#undef public_43a052
