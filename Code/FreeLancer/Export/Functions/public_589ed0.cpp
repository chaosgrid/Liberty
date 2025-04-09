#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_4ea670);
CLANG_FORWARD_PROC_SYMBOL(public_58a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_589f15 _public_589f15
#define public_589f52 _public_589f52
#define public_589fae _public_589fae
#define public_58a026 _public_58a026
#define public_58a048 _public_58a048
#define public_58a065 _public_58a065
#define public_58a096 _public_58a096
#define public_58a0b8 _public_58a0b8
#define public_58a0d8 _public_58a0d8
#define public_58a0ea _public_58a0ea
#define public_58a0fc _public_58a0fc

PROC_DECLARE(0x589ed0, internal_589ed0, public_589ed0);
extern "C" NAKED register_t __cdecl internal_589ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x14
        push ebx
        push edi
        mov ebx, ecx
        push eax
        push ebx
        call public_59dd00
        push ebx
        call public_59dbf0
        mov cl, byte ptr ds : [ebx+0x6C]
        mov edi, dword ptr ss : [esp+0x30]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test edi, edi
        mov byte ptr ds : [ebx+0x6C], cl
        je public_58a0ea
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_58a0ea
        push ebp
        push esi
        public_589f15 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c8bcc @0x589f1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bcc
        mov ecx, edi
        call esi
        test al, al
        mov ecx, edi
        je public_589f52
        call dword ptr ds : [public_5c6698]
        push eax
        call public_4177b0
        add esp, 4
        test eax, eax
        je public_58a0d8
        mov ecx, dword ptr ds : [ebx+0x334]
        push eax
        call public_4ea670
        jmp public_58a0d8
/*FIXUP public_589f52 : nop
        push offset public_5e1708 @0x589f52*/
  FIXUP public_589f52 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1708
        call esi
        test al, al
        mov ecx, edi
        je public_589fae
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+0x10]
        push 2
        mov ecx, edi
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ebx+0xA8]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_58a0d8
/*FIXUP public_589fae : nop
        push offset public_5dd344 @0x589fae*/
  FIXUP public_589fae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call esi
        test al, al
        je public_58a026
        mov ecx, dword ptr ss : [esp+0x28]
        lea esi, ds:[ebx+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi], eax
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x24], eax
        je public_58a0d8
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov ebp, eax
        test ebp, ebp
        je public_58a0d8
        mov eax, dword ptr ss : [ebp]
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_5c6698]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        call dword ptr ds : [eax+0x90]
        jmp public_58a0d8
/*FIXUP public_58a026 : nop
        push offset public_5e5000 @0x58a026*/
  FIXUP public_58a026 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5000
        mov ecx, edi
        call esi
        test al, al
        mov ecx, edi
        je public_58a048
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x32C]
        jmp public_58a0d8
/*FIXUP public_58a048 : nop
        push offset public_5e0ab4 @0x58a048*/
  FIXUP public_58a048 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ab4
        call esi
        test al, al
        mov ecx, edi
        je public_58a065
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x330]
        jmp public_58a0d8
/*FIXUP public_58a065 : nop
        push offset public_5e4ff4 @0x58a065*/
  FIXUP public_58a065 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ff4
        call esi
        test al, al
        jne public_58a0d8
/*FIXUP push offset public_5e4fe8 @0x58a070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4fe8
        mov ecx, edi
        call esi
        test al, al
        mov ecx, edi
        je public_58a096
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push eax
        mov ecx, ebx
        call public_58a5f0
        jmp public_58a0d8
/*FIXUP public_58a096 : nop
        push offset public_5e4fd8 @0x58a096*/
  FIXUP public_58a096 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4fd8
        call esi
        test al, al
        mov ecx, edi
        je public_58a0b8
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [ebx+0x358], eax
        jmp public_58a0d8
/*FIXUP public_58a0b8 : nop
        push offset public_5e16b8 @0x58a0b8*/
  FIXUP public_58a0b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16b8
        call esi
        test al, al
        je public_58a0d8
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [ebx+0x344], eax
        public_58a0d8 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_589f15
        pop esi
        pop ebp
        public_58a0ea : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_58a0fc
        mov eax, dword ptr ds : [ebx]
        lea ecx, ds:[ebx+0x60]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x14]
        public_58a0fc : nop
        pop edi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x589ed0)
    }
}

#undef public_589f15
#undef public_589f52
#undef public_589fae
#undef public_58a026
#undef public_58a048
#undef public_58a065
#undef public_58a096
#undef public_58a0b8
#undef public_58a0d8
#undef public_58a0ea
#undef public_58a0fc
