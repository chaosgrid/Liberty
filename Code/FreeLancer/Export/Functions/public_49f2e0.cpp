#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_49f2e0);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcb0a);

#define public_49f40b _public_49f40b
#define public_49f44a _public_49f44a
#define public_49f504 _public_49f504
#define public_49f51f _public_49f51f
#define public_49f52a _public_49f52a

PROC_DECLARE(0x49f2e0, internal_49f2e0, public_49f2e0);
extern "C" NAKED register_t __cdecl internal_49f2e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bcb0a @0x49f2e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcb0a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebp
        push esi
        xor ebp, ebp
        push ebp
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x904]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x908]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [public_672950]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_49f52a
        mov ecx, dword ptr ds : [public_6119f8]
        push ebx
        push edi
        push ecx
/*FIXUP push offset public_66fc60 @0x49f33d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ds:[eax+0x20]
        call public_41c970
        mov edi, dword ptr ds : [public_5c70ac]
/*FIXUP push offset public_5d0a08 @0x49f350*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
/*FIXUP push offset public_66fc60 @0x49f355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov edx, dword ptr ds : [public_6119f8]
        add esp, 8
        push edx
/*FIXUP push offset public_66dc60 @0x49f366*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c60d0]
        neg al
        sbb eax, eax
        and eax, 0xFFFFFE52
        add eax, 0x689
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x49f38b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x49f390*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov eax, dword ptr ds : [esi+0x8F4]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 2
        or cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov cl, byte ptr ss : [esp+0x2B]
        push 0xC
        mov byte ptr ss : [esp+0x3C], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0x1C
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebp
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], ebp
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x34], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        mov byte ptr ss : [esp+0x34], bl
        push 0xC
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_49f40b
        mov ebp, eax
        public_49f40b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x34], 1
        je public_49f44a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], 0
        public_49f44a : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_5c62b4]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_66fc60 @0x49f460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x49f46f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edi, dword ptr ds : [esi+0x8F4]
        add esp, 0x10
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_57b3e0
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, dword ptr ds : [esi+0xAC0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xACC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov edi, eax
        je public_49f51f
        public_49f504 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_46d680
        cmp esi, edi
        jne public_49f504
        mov eax, dword ptr ss : [esp+0x24]
        public_49f51f : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        pop ebx
        public_49f52a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x49f2e0)
    }
}

#undef public_49f40b
#undef public_49f44a
#undef public_49f504
#undef public_49f51f
#undef public_49f52a
