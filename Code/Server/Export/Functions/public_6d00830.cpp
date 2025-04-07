#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4960);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4990);
CLANG_FORWARD_PROC_SYMBOL(public_6cf49b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4a10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d00830);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ebe0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e88);

#define public_6d008f5 _public_6d008f5
#define public_6d00970 _public_6d00970
#define public_6d00972 _public_6d00972
#define public_6d00a34 _public_6d00a34
#define public_6d00a6b _public_6d00a6b
#define public_6d00a9b _public_6d00a9b
#define public_6d00ad8 _public_6d00ad8
#define public_6d00af5 _public_6d00af5
#define public_6d00af7 _public_6d00af7
#define public_6d00b27 _public_6d00b27
#define public_6d00b59 _public_6d00b59
#define public_6d00baa _public_6d00baa
#define public_6d00bd7 _public_6d00bd7
#define public_6d00c04 _public_6d00c04
#define public_6d00c07 _public_6d00c07
#define public_6d00c37 _public_6d00c37
#define public_6d00c39 _public_6d00c39
#define public_6d00c7a _public_6d00c7a
#define public_6d00cbf _public_6d00cbf
#define public_6d00d09 _public_6d00d09

PROC_DECLARE(0x6d00830, internal_6d00830, public_6d00830);
extern "C" NAKED register_t __cdecl internal_6d00830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e88 @0x6d00838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        mov ebx, dword ptr ss : [esp+0x7C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x84]
        push esi
        mov esi, ebx
        imul esi, 0x418
        push edi
        mov edi, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [ebp], 0
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov eax, dword ptr ds : [public_6d90260]
        test dword ptr ds : [esi+eax-8], 0x3FFFFFFF
        je public_6d00baa
        mov al, byte ptr ss : [esp+0x90]
        push 0
        push 0
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_6cfc340
        xor edi, edi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edi
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [esi+ecx-0x38]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x80], edi
        mov dword ptr ss : [esp+0x8C], eax
        je public_6d008f5
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x8C]
        push eax
        mov ecx, offset public_6d8da2c
        call public_6d15d10
        mov ecx, dword ptr ds : [public_6d8da30]
        mov eax, dword ptr ss : [esp+0x88]
        cmp eax, ecx
        je public_6d008f5
        lea edi, ds:[eax+0x10]
        public_6d008f5 : nop
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [esi+ecx-8]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6d0cd60
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_6d00a6b
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [esi+ecx-8]
        push edx
        push 0x1A3
/*FIXUP push offset public_6d67048 @0x6d00928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67048
        mov eax, 0x100002
/*FIXUP push offset public_6d67014 @0x6d00932*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67014
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [esi+ecx-8]
        add esp, 0x14
        push edx
        mov ecx, edi
        call public_6d0c840
        test eax, eax
        je public_6d00970
        add eax, 0xC
        test eax, eax
        je public_6d00970
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_6d00970
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 3
        cmp al, 3
        je public_6d00972
        public_6d00970 : nop
        xor edi, edi
        public_6d00972 : nop
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[edi+0x2C]
        push ecx
        mov ecx, ebx
        call public_6cf4990
        lea ecx, ss:[esp+0x10]
        call public_6cf4960
        fdivr dword ptr ds : [public_6d65520]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, edi
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        fstp st(0)
        call dword ptr ds : [edx+0x64]
        push ecx
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_6cf4a10
        push 0x400CCCCD
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_6cf4a10
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x44]
        push ebx
        push eax
        call public_6cf49b0
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], eax
        lea eax, ss:[esp+0x34]
        mov dword ptr ds : [ecx+8], edx
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        call dword ptr ds : [public_6d64598]
        mov eax, dword ptr ds : [public_6d8d924]
        add esp, 0x2C
        test eax, eax
        jne public_6d00a34
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d924], eax
        public_6d00a34 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        jmp public_6d00b59
        public_6d00a6b : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [ebp], eax
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x154]
        test al, 0x20
        je public_6d00a9b
        mov eax, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [eax], 1
        jmp public_6d00ad8
        public_6d00a9b : nop
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [public_6d8d900], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp]
        push edx
        push 0x32
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d43650
        mov eax, dword ptr ds : [public_6d8d900]
        mov edx, dword ptr ss : [esp+0x98]
        xor ecx, ecx
        add esp, 8
        cmp eax, 0xFFFFFFFF
        sete cl
        dec ecx
        and ecx, eax
        mov dword ptr ds : [edx], ecx
        public_6d00ad8 : nop
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_6d00af5
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d00af5
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6d00af7
        public_6d00af5 : nop
        xor ecx, ecx
        public_6d00af7 : nop
        mov edx, dword ptr ss : [esp+0x90]
        mov eax, dword ptr ds : [edx]
        push eax
        mov eax, dword ptr ss : [esp+0x98]
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [public_6d6420c]
        mov eax, dword ptr ds : [public_6d8d924]
        test eax, eax
        jne public_6d00b27
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d924], eax
        public_6d00b27 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        public_6d00b59 : nop
        mov eax, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [esi+eax-8], 0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x98]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        call public_6cf7720
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        public_6d00baa : nop
        lea ecx, ds:[esi+eax-4]
        call dword ptr ds : [public_6d641a4]
        test al, al
        mov eax, dword ptr ds : [public_6d90260]
        jne public_6d00cbf
        mov eax, dword ptr ds : [esi+eax-0x38]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x90], eax
        jne public_6d00bd7
        xor ecx, ecx
        jmp public_6d00c07
        public_6d00bd7 : nop
        lea ecx, ss:[esp+0x90]
        push ecx
        lea edx, ss:[esp+0x90]
        push edx
        mov ecx, offset public_6d8da2c
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, dword ptr ds : [public_6d8da30]
        jne public_6d00c04
        xor ecx, ecx
        jmp public_6d00c07
        public_6d00c04 : nop
        lea ecx, ds:[eax+0x10]
        public_6d00c07 : nop
        mov eax, dword ptr ds : [public_6d90260]
        lea edx, ds:[esi+eax-4]
        push edx
        call public_6d0c7e0
        test eax, eax
        je public_6d00c37
        add eax, 0xC
        test eax, eax
        je public_6d00c37
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d00c37
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_6d00c39
        public_6d00c37 : nop
        xor ecx, ecx
        public_6d00c39 : nop
        mov edx, dword ptr ds : [ecx+0xB0]
        mov dword ptr ss : [ebp], edx
        movzx eax, byte ptr ds : [ecx+0xE0]
        shr eax, 5
        and eax, 1
        mov edx, eax
        push edx
        mov edx, dword ptr ss : [esp+0x98]
        mov dword ptr ds : [edi], eax
        lea eax, ss:[esp+0x58]
        push eax
        push edx
        call dword ptr ds : [public_6d6420c]
        mov eax, dword ptr ds : [public_6d8d924]
        test eax, eax
        jne public_6d00c7a
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d924], eax
        public_6d00c7a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x4C]
        pop esi
        mov dword ptr ds : [eax+8], ecx
        pop ebp
        mov dword ptr ds : [eax+0xC], edx
        pop ebx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        public_6d00cbf : nop
        lea ecx, ds:[esi+eax-0x418]
        call public_6d4ebe0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [public_6d90260]
        lea ecx, ds:[esi+ecx-0x418]
        call public_6d4ebf0
        mov esi, eax
        mov eax, dword ptr ds : [public_6d8d924]
        test eax, eax
        jne public_6d00d09
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d924], eax
        public_6d00d09 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        mov dword ptr ds : [edx+8], eax
        pop esi
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x6d00830)
    }
}

#undef public_6d008f5
#undef public_6d00970
#undef public_6d00972
#undef public_6d00a34
#undef public_6d00a6b
#undef public_6d00a9b
#undef public_6d00ad8
#undef public_6d00af5
#undef public_6d00af7
#undef public_6d00b27
#undef public_6d00b59
#undef public_6d00baa
#undef public_6d00bd7
#undef public_6d00c04
#undef public_6d00c07
#undef public_6d00c37
#undef public_6d00c39
#undef public_6d00c7a
#undef public_6d00cbf
#undef public_6d00d09
