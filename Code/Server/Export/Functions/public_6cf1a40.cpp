#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b110);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ed90);
CLANG_FORWARD_PROC_SYMBOL(public_6d4efb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f260);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f460);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_JUMP_SYMBOL(public_6d608c2);

#define public_6cf1b5f _public_6cf1b5f
#define public_6cf1b86 _public_6cf1b86
#define public_6cf1b8a _public_6cf1b8a
#define public_6cf1bb5 _public_6cf1bb5
#define public_6cf1bb9 _public_6cf1bb9
#define public_6cf1be0 _public_6cf1be0
#define public_6cf1be4 _public_6cf1be4
#define public_6cf1c07 _public_6cf1c07
#define public_6cf1c47 _public_6cf1c47
#define public_6cf1c73 _public_6cf1c73
#define public_6cf1cb5 _public_6cf1cb5
#define public_6cf1ccd _public_6cf1ccd
#define public_6cf1d06 _public_6cf1d06
#define public_6cf1e10 _public_6cf1e10
#define public_6cf1e4d _public_6cf1e4d
#define public_6cf1e60 _public_6cf1e60
#define public_6cf1e9d _public_6cf1e9d
#define public_6cf1ee2 _public_6cf1ee2
#define public_6cf1ee6 _public_6cf1ee6
#define public_6cf1f20 _public_6cf1f20
#define public_6cf1f4d _public_6cf1f4d
#define public_6cf1f70 _public_6cf1f70
#define public_6cf1f9d _public_6cf1f9d
#define public_6cf1fa8 _public_6cf1fa8
#define public_6cf1fca _public_6cf1fca
#define public_6cf1fde _public_6cf1fde
#define public_6cf1ff1 _public_6cf1ff1

PROC_DECLARE(0x6cf1a40, internal_6cf1a40, public_6cf1a40);
extern "C" NAKED register_t __cdecl internal_6cf1a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d608c2 @0x6cf1a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d608c2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        test ebp, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_6cf1ff1
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ss:[ebp-1]
        cmp eax, ecx
        jae public_6cf1ff1
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf1ff1
        imul ebp, 0x418
        mov edi, dword ptr ds : [ecx+ebp-0x4C]
        test edi, edi
        mov dword ptr ss : [esp+0x28], edi
        je public_6cf1ff1
        mov esi, dword ptr ss : [esp+0x5C]
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d6440c]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, eax
        imul edx, 0x418
        lea ebp, ds:[ecx+ebp-0x418]
        push esi
        mov esi, dword ptr ss : [ebp+0x3E4]
        lea ebx, ds:[edx+ecx-0x418]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x19C]
        mov esi, dword ptr ds : [ebx+0x3CC]
        mov al, byte ptr ds : [esi+0x20]
        cmp al, 1
        mov dword ptr ss : [esp+0x5C], esi
        jne public_6cf1ff1
        cmp byte ptr ds : [edi+0x20], 1
        jne public_6cf1ff1
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6d4f460
        cmp dword ptr ss : [esp+0x24], eax
        ja public_6cf1fde
        mov esi, dword ptr ds : [esi+0x1C]
        mov ecx, ebx
        call public_6d4f460
        cmp esi, eax
        ja public_6cf1fde
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[ebp+0x3E4]
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf1b5f
        mov dword ptr ss : [esp+0x20], 0
        public_6cf1b5f : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ds:[ebx+0x3E4]
        push edx
        call public_6d006c0
        add esp, 0xC
        xor esi, esi
        test al, al
        jne public_6cf1b86
        xor ecx, ecx
        mov dword ptr ss : [esp+0x24], ecx
        jmp public_6cf1b8a
        public_6cf1b86 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        public_6cf1b8a : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, esi
        je public_6cf1bb5
        add eax, 0xC
        cmp eax, esi
        je public_6cf1bb5
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_6cf1bb5
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        mov dword ptr ss : [esp+0x18], eax
        je public_6cf1bb9
        public_6cf1bb5 : nop
        mov dword ptr ss : [esp+0x18], esi
        public_6cf1bb9 : nop
        cmp ecx, esi
        je public_6cf1be0
        lea eax, ds:[ecx+0xC]
        cmp eax, esi
        je public_6cf1be0
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_6cf1be0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        mov dword ptr ss : [esp+0x1C], eax
        je public_6cf1be4
        public_6cf1be0 : nop
        mov dword ptr ss : [esp+0x1C], esi
        public_6cf1be4 : nop
        mov ecx, ebp
        call public_6d4efb0
        push eax
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6d64408]
        mov edi, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x50], esi
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6cf1c47
        public_6cf1c07 : nop
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0xC]
        lea edi, ds:[esi+8]
        mov esi, dword ptr ds : [esi]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x38], edx
        call dword ptr ds : [public_6d64404]
        test eax, eax
        je public_6cf1cb5
        mov edi, dword ptr ds : [edi+0x14]
        movzx eax, word ptr ds : [eax+2]
        push edi
        push eax
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6d64400]
        cmp esi, dword ptr ss : [esp+0x14]
        jne public_6cf1c07
        public_6cf1c47 : nop
        mov ecx, ebx
        call public_6d4efb0
        push eax
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_6d64408]
        mov eax, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov byte ptr ss : [esp+0x50], 1
        mov dword ptr ss : [esp+0x14], eax
        je public_6cf1d06
        public_6cf1c73 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [edi+0x1C]
        lea esi, ds:[edi+8]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d64404]
        test eax, eax
        je public_6cf1ccd
        mov esi, dword ptr ds : [esi+0x14]
        movzx eax, word ptr ds : [eax+2]
        push esi
        push eax
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_6d64400]
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_6cf1c73
        jmp public_6cf1d06
        public_6cf1cb5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        push 3
        push edx
        call dword ptr ds : [eax+0x140]
        jmp public_6cf1fca
        public_6cf1ccd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        push 3
        push edx
        call dword ptr ds : [eax+0x140]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x50], 0
        call dword ptr ds : [public_6d643fc]
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_6d643fc]
        jmp public_6cf1ff1
        public_6cf1d06 : nop
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ds:[eax+0x10]
        call dword ptr ds : [public_6d643f8]
        call public_6d60150
        mov ecx, dword ptr ss : [esp+0x5C]
        add ecx, 0x10
        mov edi, eax
        call dword ptr ds : [public_6d643f8]
        call public_6d60150
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_6d4ed90
        push eax
        call dword ptr ds : [public_6d643c0]
        fld dword ptr ds : [eax+0x100]
        add esp, 4
        call public_6d60150
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x2C]
        call public_6d4efb0
        mov ecx, eax
        call dword ptr ds : [public_6d643f8]
        fsubr dword ptr ss : [esp+0x2C]
        call public_6d60150
        mov esi, eax
        sub esi, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        add esi, edi
        call public_6d4ed90
        push eax
        call dword ptr ds : [public_6d643c0]
        fld dword ptr ds : [eax+0x100]
        add esp, 4
        call public_6d60150
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x2C]
        call public_6d4efb0
        mov ecx, eax
        call dword ptr ds : [public_6d643f8]
        fsubr dword ptr ss : [esp+0x2C]
        call public_6d60150
        mov edx, dword ptr ss : [esp+0x14]
        sub eax, edi
        add eax, edx
        test esi, esi
        jl public_6cf1fa8
        test eax, eax
        jl public_6cf1fa8
        mov edi, dword ptr ss : [esp+0x5C]
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi+0x1C]
        sub edx, ecx
        push 1
        push edx
        mov ecx, ebp
        call public_6d4f4e0
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        push 1
        push eax
        mov ecx, ebx
        call public_6d4f4e0
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6cf1e4d
        lea esp, ss:[esp]
        public_6cf1e10 : nop
        fld dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+8]
        mov edi, dword ptr ds : [edi]
        push 1
        push ecx
        mov ecx, dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        mov ecx, ebp
        call public_6d4f260
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        push 1
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        mov ecx, ebx
        call public_6d4f230
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_6cf1e10
        public_6cf1e4d : nop
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [edx+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6cf1e9d
        mov edi, edi
        public_6cf1e60 : nop
        fld dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [edi+0x1C]
        lea esi, ds:[edi+8]
        mov edi, dword ptr ds : [edi]
        push 1
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        mov ecx, ebx
        call public_6d4f260
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+4]
        push 1
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        push eax
        mov ecx, ebp
        call public_6d4f230
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_6cf1e60
        public_6cf1e9d : nop
        mov ecx, ebp
        call public_6d4efb0
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [public_6d643f4]
        push eax
        mov ecx, edi
        call esi
        mov ecx, ebx
        call public_6d4efb0
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        call esi
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        add edi, 0xB0
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf1ee2
        xor esi, esi
        jmp public_6cf1ee6
        public_6cf1ee2 : nop
        mov esi, dword ptr ss : [esp+0x5C]
        public_6cf1ee6 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        call public_6d0b110
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        call public_6d0b110
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        push 1
        push eax
        call dword ptr ds : [edx+0x140]
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6cf1f4d
        lea ecx, ds:[ecx]
        public_6cf1f20 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x38], ecx
        jne public_6cf1f20
        mov eax, dword ptr ss : [esp+0x34]
        public_6cf1f4d : nop
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        mov edi, eax
        je public_6cf1f9d
        lea esp, ss:[esp]
        public_6cf1f70 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x44], ecx
        jne public_6cf1f70
        mov eax, dword ptr ss : [esp+0x40]
        public_6cf1f9d : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        jmp public_6cf1ff1
        public_6cf1fa8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        push 5
        push edx
        call dword ptr ds : [eax+0x140]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x50], 0
        call dword ptr ds : [public_6d643fc]
        public_6cf1fca : nop
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_6d643fc]
        jmp public_6cf1ff1
        public_6cf1fde : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        push 3
        push edx
        call dword ptr ds : [eax+0x140]
        public_6cf1ff1 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6cf1a40)
    }
}

#undef public_6cf1b5f
#undef public_6cf1b86
#undef public_6cf1b8a
#undef public_6cf1bb5
#undef public_6cf1bb9
#undef public_6cf1be0
#undef public_6cf1be4
#undef public_6cf1c07
#undef public_6cf1c47
#undef public_6cf1c73
#undef public_6cf1cb5
#undef public_6cf1ccd
#undef public_6cf1d06
#undef public_6cf1e10
#undef public_6cf1e4d
#undef public_6cf1e60
#undef public_6cf1e9d
#undef public_6cf1ee2
#undef public_6cf1ee6
#undef public_6cf1f20
#undef public_6cf1f4d
#undef public_6cf1f70
#undef public_6cf1f9d
#undef public_6cf1fa8
#undef public_6cf1fca
#undef public_6cf1fde
#undef public_6cf1ff1
