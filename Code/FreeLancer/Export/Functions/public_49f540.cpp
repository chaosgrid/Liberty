#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d580);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_49f540);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5040);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcb0a);

#define public_49f618 _public_49f618
#define public_49f657 _public_49f657
#define public_49f6c2 _public_49f6c2
#define public_49f741 _public_49f741
#define public_49f746 _public_49f746
#define public_49f760 _public_49f760
#define public_49f77b _public_49f77b

PROC_DECLARE(0x49f540, internal_49f540, public_49f540);
extern "C" NAKED register_t __cdecl internal_49f540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcb0a @0x49f542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcb0a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xAC0]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC4]
        mov edx, dword ptr ds : [ecx]
        push edi
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC8]
        mov eax, dword ptr ds : [ecx]
        push edi
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xACC]
        mov edx, dword ptr ds : [ecx]
        push edi
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov word ptr ds : [public_66fc60], di
        mov byte ptr ss : [esp+0x24], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x34], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x38], 2
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_49f618
        mov ebp, eax
        public_49f618 : nop
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
        je public_49f657
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], 0
        public_49f657 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_5c62b4]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_66fc60 @0x49f66d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x49f67c*/
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
        mov eax, dword ptr ds : [esi+0x8F4]
        and byte ptr ds : [eax+0x6C], 0xFD
        lea edi, ds:[esi+0xAE4]
        mov ebx, 3
        public_49f6c2 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x49f6c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        add edi, 4
        dec ebx
        jne public_49f6c2
        mov ecx, dword ptr ds : [esi+0xAE0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        call public_4c5040
        test eax, eax
        je public_49f746
        mov al, byte ptr ds : [eax+0x40]
        cmp al, 7
        je public_49f746
        cmp al, 8
        je public_49f746
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x110]
        call public_4b9bb0
        mov al, byte ptr ds : [esi+0xF24]
        test al, al
        je public_49f741
        call public_43d580
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 0xEF02
        mov ecx, esi
        call dword ptr ds : [edx+0x5C]
        jmp public_49f746
        public_49f741 : nop
        call public_45a460
        public_49f746 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov edi, eax
        je public_49f77b
        lea ebx, ds:[ebx]
        public_49f760 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_46d680
        cmp esi, edi
        jne public_49f760
        mov eax, dword ptr ss : [esp+0x24]
        public_49f77b : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x49f540)
    }
}

#undef public_49f618
#undef public_49f657
#undef public_49f6c2
#undef public_49f741
#undef public_49f746
#undef public_49f760
#undef public_49f77b
