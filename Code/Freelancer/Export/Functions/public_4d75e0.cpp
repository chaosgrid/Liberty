#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_4c95b0);
CLANG_FORWARD_PROC_SYMBOL(public_4d75e0);
CLANG_FORWARD_PROC_SYMBOL(public_4d7b50);
CLANG_FORWARD_PROC_SYMBOL(public_4d9980);
CLANG_FORWARD_PROC_SYMBOL(public_4d9a70);
CLANG_FORWARD_PROC_SYMBOL(public_4d9ca0);
CLANG_FORWARD_PROC_SYMBOL(public_55a360);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be316);

#define public_4d7636 _public_4d7636
#define public_4d76d0 _public_4d76d0
#define public_4d7741 _public_4d7741
#define public_4d7750 _public_4d7750
#define public_4d7790 _public_4d7790
#define public_4d77a5 _public_4d77a5
#define public_4d77f6 _public_4d77f6
#define public_4d7811 _public_4d7811
#define public_4d7881 _public_4d7881
#define public_4d7903 _public_4d7903
#define public_4d791a _public_4d791a
#define public_4d792a _public_4d792a
#define public_4d7968 _public_4d7968
#define public_4d79a5 _public_4d79a5

PROC_DECLARE(0x4d75e0, internal_4d75e0, public_4d75e0);
extern "C" NAKED register_t __cdecl internal_4d75e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be316 @0x4d75e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be316
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x16C
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        xor ebp, ebp
        lea esi, ds:[ebx+0x28]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [ebx+4], ebp
        mov byte ptr ds : [ebx+8], 0
        call public_4c95b0
        mov dword ptr ds : [ebx], offset public_5d6eac
        mov dword ptr ds : [ebx+0x34], ebp
        cmp dword ptr ds : [esi], ebp
        mov dword ptr ss : [esp+0x184], ebp
        je public_4d7636
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4d7636 : nop
        mov dword ptr ds : [ebx+0x30], ebp
        lea esi, ds:[ebx+0x38]
        mov ecx, esi
        mov dword ptr ss : [esp+0x184], 1
        call public_59f860
        mov dword ptr ds : [ebx+0x364], offset public_5cbed8
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ebx+0x37C], al
        mov dword ptr ds : [ebx+0x380], ebp
        mov dword ptr ds : [ebx+0x384], ebp
        mov dword ptr ds : [ebx+0x388], ebp
        mov dword ptr ds : [ebx+0x390], ebp
        mov dword ptr ds : [ebx+0x394], ebp
        mov dword ptr ds : [esi], offset public_5d8344
        mov esi, dword ptr ss : [esp+0x18C]
        mov dword ptr ds : [ebx], offset public_5d8310
        mov dword ptr ds : [ebx+0xB4], offset public_5d8304
        mov dword ptr ds : [ebx+0x364], offset public_5d82fc
        mov dword ptr ds : [ebx+0x368], offset public_5d82f4
        mov ecx, esi
        mov byte ptr ss : [esp+0x184], 6
        mov dword ptr ds : [public_674a58], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4d792a
        nop 
/*FIXUP public_4d76d0 : nop
        push offset public_5d82e4 @0x4d76d0*/
  FIXUP public_4d76d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d82e4
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4d791a
        mov edx, dword ptr ds : [ebx+0x384]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ds:[ebx+0x37C]
        push edx
        mov dword ptr ss : [esp+0x3C], ebp
        mov byte ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x60], ebp
        mov byte ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0xE4], ebp
        mov byte ptr ss : [esp+0xE8], 0
        call public_4d9a70
        mov ebp, dword ptr ds : [ebx+0x384]
        push 0
        mov ecx, esi
        sub ebp, 0x148
        call dword ptr ds : [public_5c6024]
        test eax, eax
        lea edi, ss:[ebp+4]
        jne public_4d7741
        mov dword ptr ss : [ebp], eax
        mov byte ptr ds : [edi], al
        jmp public_4d7750
        public_4d7741 : nop
        push eax
        push 0x20
        push edi
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [ebp], eax
        public_4d7750 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        mov ecx, esi
        mov dword ptr ss : [ebp+0x12C], eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 3
        mov ecx, esi
        mov dword ptr ss : [ebp+0x130], eax
        call dword ptr ds : [public_5c6024]
        test eax, eax
        jne public_4d7790
        mov dword ptr ss : [ebp+0x24], eax
        mov byte ptr ss : [ebp+0x28], al
        jmp public_4d77a5
        public_4d7790 : nop
        push eax
        lea eax, ss:[ebp+0x28]
        push 0x80
        push eax
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [ebp+0x24], eax
        public_4d77a5 : nop
        push 4
        lea ecx, ss:[esp+0x30]
        push ecx
        push edi
        mov ecx, offset public_612638
        call public_4d9ca0
        mov edx, dword ptr ss : [esp+0x2C]
        neg al
        sbb eax, eax
        and eax, edx
        mov dword ptr ss : [ebp+0x134], eax
        lea eax, ss:[ebp+4]
        push eax
        call dword ptr ds : [public_5c650c]
        add esp, 4
        push 4
        mov ecx, esi
        mov dword ptr ss : [ebp+0x138], eax
        call dword ptr ds : [public_5c6024]
        test eax, eax
        jne public_4d77f6
        mov dword ptr ss : [ebp+0xA8], eax
        mov byte ptr ss : [ebp+0xAC], al
        jmp public_4d7811
        public_4d77f6 : nop
        push eax
        lea edx, ss:[ebp+0xAC]
        push 0x80
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [ebp+0xA8], eax
        public_4d7811 : nop
        lea ecx, ss:[ebp+0x24]
        call public_4d9980
        sub esp, 0x10
        mov esi, esp
        mov edi, eax
        mov al, byte ptr ss : [esp+0x23]
        mov dword ptr ss : [esp+0x28], esp
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4d7881
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4d7881 : nop
        call public_55a360
        add esp, 0x10
        lea ecx, ss:[ebp+0xA8]
        mov dword ptr ss : [ebp+0x140], eax
        call public_4d9980
        mov dl, byte ptr ss : [esp+0x13]
        sub esp, 0x10
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov edi, eax
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4d7903
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+eax], 0
        public_4d7903 : nop
        call public_55a360
        mov esi, dword ptr ss : [esp+0x19C]
        add esp, 0x10
        mov dword ptr ss : [ebp+0x144], eax
        xor ebp, ebp
        public_4d791a : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4d76d0
/*FIXUP public_4d792a : nop
        push offset public_5d829c @0x4d792a*/
  FIXUP public_4d792a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d829c
        lea ecx, ds:[ebx+8]
        push 0x20
        push ecx
        call public_417c50
        add esp, 0xC
        push ebp
        push ebp
        lea ecx, ds:[ebx+0x38]
        mov dword ptr ds : [ebx+4], eax
        call public_4d7b50
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d82d4
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ds:[ebx+0x50]
        jb public_4d7968
        mov eax, 0x1F
        public_4d7968 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d82d4
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x50], 0
        mov dword ptr ds : [ebx+0x4C], eax
        lea ecx, ds:[ebx+0x390]
        mov dword ptr ds : [ebx+0x48], offset public_5d82d4
        mov dword ptr ds : [ebx+0x38C], ebp
        cmp dword ptr ds : [ecx], ebp
        je public_4d79a5
        push ebp
        call dword ptr ds : [public_5c62a8]
        public_4d79a5 : nop
        lea eax, ds:[ebx+0x398]
        mov dword ptr ss : [esp+0x20], 0x3D1FBE77
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x24], 0x3D1FBE77
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x17C]
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x3A4], eax
        mov dword ptr ds : [ebx+0x3A8], eax
        mov edx, dword ptr ds : [public_5d828c]
        pop edi
        mov dword ptr ds : [ebx+0x3B0], ebp
        mov dword ptr ds : [ebx+0x3B4], ebp
        mov dword ptr ds : [ebx+0x3E8], ebp
        pop esi
        mov dword ptr ds : [ebx+0x3AC], edx
        mov dword ptr ds : [ebx+0x3C0], 1
        mov dword ptr ds : [ebx+0x3C8], 0x13
        mov byte ptr ds : [ebx+0x3CC], 0
        mov byte ptr ds : [ebx+0x3CD], 0
        pop ebp
        mov eax, ebx
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x178
        ret 4
        UNREACHABLE_TRAP(0x4d75e0)
    }
}

#undef public_4d7636
#undef public_4d76d0
#undef public_4d7741
#undef public_4d7750
#undef public_4d7790
#undef public_4d77a5
#undef public_4d77f6
#undef public_4d7811
#undef public_4d7881
#undef public_4d7903
#undef public_4d791a
#undef public_4d792a
#undef public_4d7968
#undef public_4d79a5
