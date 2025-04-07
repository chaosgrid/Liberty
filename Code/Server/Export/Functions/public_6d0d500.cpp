#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d500);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d616b9);

#define public_6d0d570 _public_6d0d570
#define public_6d0d620 _public_6d0d620
#define public_6d0d632 _public_6d0d632
#define public_6d0d64f _public_6d0d64f
#define public_6d0d651 _public_6d0d651
#define public_6d0d65b _public_6d0d65b
#define public_6d0d690 _public_6d0d690
#define public_6d0d6bd _public_6d0d6bd
#define public_6d0d6c6 _public_6d0d6c6

PROC_DECLARE(0x6d0d500, internal_6d0d500, public_6d0d500);
extern "C" NAKED register_t __cdecl internal_6d0d500()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d616b9 @0x6d0d508*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d616b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi+8]
        push edi
        push eax
        mov ebx, ecx
        call public_6d0c840
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, ebx
        mov edi, eax
        call public_6d0c840
        mov ebp, eax
        mov al, byte ptr ds : [public_6d88a80]
        test al, al
        jne public_6d0d570
        test ebp, ebp
        je public_6d0d570
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_6d0d570
        test edi, edi
        je public_6d0d6c6
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_6d0d6c6
        public_6d0d570 : nop
        test edi, edi
        je public_6d0d6c6
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d0d6c6
        mov eax, dword ptr ds : [public_6d6402c]
        mov edx, dword ptr ds : [esi]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov cx, word ptr ds : [eax]
        push edx
        mov word ptr ss : [esp+0x1C], cx
        call dword ptr ds : [public_6d642fc]
        mov cx, word ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        lea edx, ds:[esi+0x10]
        mov eax, dword ptr ds : [edx]
        add esp, 4
        mov word ptr ss : [esp+0x18], cx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov al, byte ptr ss : [esp+0x54]
        push ebx
        mov dword ptr ss : [esp+0x24], ecx
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], edx
        mov byte ptr ss : [esp+0x30], al
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, 0x2000000
        mov dword ptr ss : [esp+0x4C], ebx
        jne public_6d0d620
        mov dword ptr ss : [esp+0x38], 2
        jmp public_6d0d632
        public_6d0d620 : nop
        xor edx, edx
        cmp eax, 0x1000000
        sete dl
        lea edx, ds:[edx+edx+1]
        mov dword ptr ss : [esp+0x38], edx
        public_6d0d632 : nop
        cmp ebp, ebx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x3C], eax
        je public_6d0d65b
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, ebx
        je public_6d0d64f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0d651
        public_6d0d64f : nop
        xor eax, eax
        public_6d0d651 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        mov dword ptr ss : [esp+0x40], edx
        public_6d0d65b : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x180]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d0d6bd
        lea ebx, ds:[ebx]
        public_6d0d690 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6d0d690
        mov eax, dword ptr ss : [esp+0x2C]
        public_6d0d6bd : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d0d6c6 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6d0d500)
    }
}

#undef public_6d0d570
#undef public_6d0d620
#undef public_6d0d632
#undef public_6d0d64f
#undef public_6d0d651
#undef public_6d0d65b
#undef public_6d0d690
#undef public_6d0d6bd
#undef public_6d0d6c6
