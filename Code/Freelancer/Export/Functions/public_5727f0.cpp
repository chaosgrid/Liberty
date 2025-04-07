#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_579870);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57bdb0);
CLANG_FORWARD_PROC_SYMBOL(public_57bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_57be30);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57c840);
CLANG_FORWARD_PROC_SYMBOL(public_57c850);
CLANG_FORWARD_PROC_SYMBOL(public_57c860);
CLANG_FORWARD_PROC_SYMBOL(public_57c920);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c38fe);

#define public_572956 _public_572956
#define public_5729e4 _public_5729e4
#define public_572aae _public_572aae
#define public_572b13 _public_572b13
#define public_572c21 _public_572c21
#define public_572c9e _public_572c9e

PROC_DECLARE(0x5727f0, internal_5727f0, public_5727f0);
extern "C" NAKED register_t __cdecl internal_5727f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push public_5c38fe @0x5727f5*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c38fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_591cd0
        test al, al
        je public_572c9e
        lea edi, ds:[esi+0x7C]
        mov dword ptr ds : [esi+0xB4], ebx
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2f8c @0x57282f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2f8c
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xE0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2f7c @0x572841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2f7c
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xE4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e1afc @0x572853*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1afc
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xE8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2f74 @0x572865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2f74
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xEC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2f64 @0x572877*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2f64
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0xE0]
        mov dword ptr ds : [esi+0xF0], eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xACA
        mov ecx, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xACE
        mov ecx, dword ptr ds : [esi+0xE8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        push 0xF
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [eax+4], 0xAC6
        call public_5760d0
        mov eax, dword ptr ds : [esi+0xF8]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0xF4]
        push eax
        push ecx
        lea ecx, ss:[ebp+8]
        push ecx
        mov ecx, edi
        call public_46c860
        push 0x9CA4
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[ebp+8]
        push ecx
        push eax
        lea edx, ss:[ebp-0x10]
        push edx
        mov ecx, edi
        mov byte ptr ss : [ebp-4], 1
        call public_46c800
        lea ecx, ss:[ebp+8]
        mov byte ptr ss : [ebp-4], bl
        call public_45eeb0
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        push edi
        push 0x60005
        call public_57da40
        add esp, 8
        test al, al
        je public_572956
        push edi
        call public_57eb40
        add esp, 4
        public_572956 : nop
        mov eax, dword ptr ds : [esi+0x104]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0x100]
        push eax
        push ecx
        lea eax, ss:[ebp+8]
        push eax
        mov ecx, ebx
        call public_46c860
        push 0x9CA4
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[ebp+8]
        push ecx
        push eax
        lea edx, ss:[ebp-0x10]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [ebp-4], 3
        call public_46c800
        lea ecx, ss:[ebp+8]
        mov byte ptr ss : [ebp-4], 2
        call public_45eeb0
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        push ebx
        push 0x601EB
        call public_57da40
        add esp, 8
        test al, al
        je public_5729e4
        lea eax, ds:[esi+0x100]
        push eax
        call public_57eb40
        add esp, 4
        public_5729e4 : nop
        mov ecx, dword ptr ds : [esi+0xE0]
        push 1
        call public_57bdd0
        mov ecx, dword ptr ds : [esi+0xE0]
        push 0
        call public_57be30
        push 0x9CA4
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 4
        mov ecx, eax
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [esi+0xE0]
        lea ecx, ds:[eax+0x4FC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+8]
        push edx
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        mov byte ptr ss : [ebp-4], 5
        call public_46c800
        lea ecx, ss:[ebp+8]
        mov byte ptr ss : [ebp-4], bl
        call public_45eeb0
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [esi+0xE0]
        lea ecx, ds:[eax+0x4DC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+8]
        push edx
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        mov byte ptr ss : [ebp-4], 7
        call public_46c800
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 6
        je public_572aae
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp+8], 0
        public_572aae : nop
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62bc]
        push ebx
/*FIXUP push offset public_5cef90 @0x572abb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        lea ecx, ss:[ebp-0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [esi+0xE0]
        lea ecx, ds:[eax+0x4DC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+8]
        push edx
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        mov byte ptr ss : [ebp-4], 9
        call public_46c800
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 8
        je public_572b13
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp+8], 0
        public_572b13 : nop
        lea ecx, ss:[ebp-0x30]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ds : [esi+0xE0]
        push 0x28
        call public_57bdb0
        mov ecx, dword ptr ds : [esi+0xE0]
        push 1
        call public_579860
        mov ecx, dword ptr ds : [esi+0xE0]
/*FIXUP push offset public_679bb4 @0x572b3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_579870
        mov ecx, dword ptr ds : [esi+0xE0]
        push 2
        call public_579a60
        mov ecx, dword ptr ds : [esi+0xE0]
        push 0x12
/*FIXUP push offset public_614c74 @0x572b5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_614c74
        call public_57c860
        mov ecx, dword ptr ds : [esi+0xE0]
        push 0x2D
        call public_57c920
        mov ecx, dword ptr ds : [esi+0xE0]
        push 1
        call public_57c840
        mov ecx, dword ptr ds : [esi+0xE0]
        push 1
        call public_57c850
        mov ecx, dword ptr ds : [esi+0xEC]
        call public_57b370
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ds : [esi+0xEC]
        lea edx, ss:[ebp-0x14]
        push edx
        mov dword ptr ss : [ebp-4], 0xA
        call public_57b470
        lea ecx, ss:[ebp-0x14]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xEC]
        push 1
        call public_5799f0
        lea eax, ss:[ebp-0x58]
        push eax
        call dword ptr ds : [public_5c6bdc]
        add esp, 4
        test al, al
        je public_572c21
        xor eax, eax
        lea edi, ss:[ebp-0x58]
        mov ecx, ebx
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        inc edi
        lea eax, ds:[edi+edi]
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov ebx, esp
        push edi
        lea ecx, ss:[ebp-0x58]
        push ecx
        push ebx
        call dword ptr ds : [public_5c70f8]
        mov ecx, dword ptr ds : [esi+0xE0]
        add esp, 0xC
        push 0
        push ebx
        call public_57c0e0
        public_572c21 : nop
        mov ecx, dword ptr ds : [esi+0xE0]
        call public_57c750
        mov ecx, dword ptr ds : [esi+0xE8]
        xor eax, eax
        push 1
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xBC], 0xBFF80000
        mov byte ptr ds : [esi+0xC0], al
        mov dword ptr ds : [esi+0xC4], eax
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE4]
        push 1
        call public_579a90
        mov eax, dword ptr ds : [esi+0xE0]
        mov bl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and bl, cl
        mov byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [eax+0x6C], cl
        mov edx, dword ptr ds : [esi+0xF0]
        add edx, 0x60
        mov eax, dword ptr ds : [edx]
        add esi, 0xD4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov al, 1
        public_572c9e : nop
        lea esp, ss:[ebp-0x64]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x5727f0)
    }
}

#undef public_572956
#undef public_5729e4
#undef public_572aae
#undef public_572b13
#undef public_572c21
#undef public_572c9e
