#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4223d0);
CLANG_FORWARD_PROC_SYMBOL(public_422410);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_50b2d0);
CLANG_FORWARD_PROC_SYMBOL(public_50bb20);
CLANG_FORWARD_PROC_SYMBOL(public_50bb60);
CLANG_FORWARD_PROC_SYMBOL(public_50c120);
CLANG_FORWARD_PROC_SYMBOL(public_50c190);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfbf1);

#define public_50b672 _public_50b672
#define public_50b705 _public_50b705
#define public_50b715 _public_50b715
#define public_50b793 _public_50b793
#define public_50b79e _public_50b79e
#define public_50b7a7 _public_50b7a7
#define public_50b7ed _public_50b7ed
#define public_50b7f0 _public_50b7f0
#define public_50b801 _public_50b801
#define public_50b809 _public_50b809
#define public_50b8a9 _public_50b8a9
#define public_50b8af _public_50b8af
#define public_50ba1c _public_50ba1c
#define public_50ba4e _public_50ba4e
#define public_50ba78 _public_50ba78
#define public_50ba91 _public_50ba91
#define public_50baaf _public_50baaf
#define public_50bac4 _public_50bac4
#define public_50bafc _public_50bafc

PROC_DECLARE(0x50b510, internal_50b510, public_50b510);
extern "C" NAKED register_t __cdecl internal_50b510()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bfbf1 @0x50b518*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfbf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xBC
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x74]
        test al, al
        je public_50bafc
        mov ebx, dword ptr ss : [esp+0xD8]
        test ebx, ebx
        jl public_50bafc
        cmp ebx, dword ptr ss : [ebp+0x3C]
        jge public_50bafc
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        push 0x16
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0x16
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0xE0], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x5C]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0xE0], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        lea ecx, ss:[esp+0x13]
        mov byte ptr ss : [esp+0xD4], 2
        call public_4223d0
        lea ecx, ss:[esp+0x13]
        call public_422410
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x9C]
        rep movsd
        mov esi, dword ptr ss : [esp+0xDC]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x60], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_675074]
        mov dword ptr ss : [esp+0x68], edx
        test eax, eax
        jne public_50b672
        call public_5b73e0
        mov dword ptr ds : [public_675074], eax
        public_50b672 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        lea ecx, ss:[esp+0x6C]
        call public_4215b0
        lea eax, ss:[esp+0x6C]
        push eax
        push esi
        mov dword ptr ss : [esp+0xA0], 0
        mov dword ptr ss : [esp+0x9C], 0
        mov dword ptr ss : [esp+0x98], 0
        call public_422690
        add esp, 8
        mov ecx, ebp
        call public_50b2d0
        test al, al
        je public_50bac4
        mov edx, dword ptr ss : [ebp+0x40]
        lea ecx, ds:[ebx+ebx*2]
        mov edi, dword ptr ds : [edx+ecx*8+4]
        mov esi, dword ptr ds : [edx+ecx*8]
        lea eax, ds:[edx+ecx*8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_675030]
        test eax, eax
        mov dword ptr ss : [esp+0x44], edi
        je public_50b705
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_675030], 0
        public_50b705 : nop
        test ebx, ebx
        je public_50b715
        mov dword ptr ds : [public_675030], ebx
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+4]
        public_50b715 : nop
        mov ecx, offset public_675018
        call public_50c190
        mov dword ptr ds : [public_675018], 5
        mov byte ptr ds : [public_675040], 0
        mov byte ptr ds : [public_675041], 0
        fld dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp+0x4C]
        fld dword ptr ss : [ebp+0x48]
        fld dword ptr ss : [ebp+0x44]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_675048], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_675049], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_67504a], al
        call public_5b7ec0
        cmp esi, edi
        mov byte ptr ds : [public_67504b], al
        mov ebx, esi
        jg public_50ba1c
        add esi, esi
        mov dword ptr ss : [esp+0x1C], esi
        public_50b793 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        cmp esi, ecx
        mov eax, esi
        jl public_50b79e
        sub eax, ecx
        public_50b79e : nop
        lea edx, ds:[esi+1]
        cmp edx, ecx
        jl public_50b7a7
        sub edx, ecx
        public_50b7a7 : nop
        mov ecx, dword ptr ss : [ebp+0x38]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x50], eax
        lea edx, ds:[edx+edx*2]
        lea eax, ds:[ecx+edx*4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, ebx
        and eax, 1
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x24], edx
        je public_50b7ed
        mov edx, dword ptr ds : [ecx+0x10]
        jmp public_50b7f0
        public_50b7ed : nop
        mov edx, dword ptr ds : [ecx+8]
        public_50b7f0 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_50b801
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_50b809
        public_50b801 : nop
        mov dword ptr ss : [esp+0x14], 0
        public_50b809 : nop
        fild dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [public_675041]
        test al, al
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [public_675050]
        mov dword ptr ds : [public_67504c], ecx
        mov dword ptr ds : [public_675058], 0
        fstp dword ptr ds : [public_675054]
        je public_50b8af
        mov edx, dword ptr ds : [public_675044]
        and edx, 3
        cmp dl, 3
        jne public_50b8a9
        mov eax, dword ptr ds : [public_675020]
        add eax, 2
        mov ecx, offset public_675018
        mov dword ptr ds : [public_675020], eax
        call public_50c120
        mov eax, dword ptr ds : [public_675020]
        mov ecx, dword ptr ds : [public_67501c]
        lea esi, ds:[eax-5]
        shl esi, 5
        add esi, ecx
        lea edi, ds:[eax-2]
        shl edi, 5
        add edi, ecx
        mov ecx, 8
        rep movsd
        mov eax, dword ptr ds : [public_675020]
        mov ecx, dword ptr ds : [public_67501c]
        lea esi, ds:[eax-3]
        shl esi, 5
        add esi, ecx
        shl eax, 5
        lea edi, ds:[eax+ecx-0x20]
        mov ecx, 8
        rep movsd
        mov esi, dword ptr ss : [esp+0x1C]
        public_50b8a9 : nop
        inc dword ptr ds : [public_675044]
        public_50b8af : nop
        mov eax, dword ptr ds : [public_675020]
        mov dl, byte ptr ds : [public_675048]
        mov ecx, dword ptr ds : [public_67501c]
        shl eax, 5
        mov byte ptr ds : [eax+ecx+0xE], dl
        mov eax, dword ptr ds : [public_675020]
        mov dl, byte ptr ds : [public_675049]
        mov ecx, dword ptr ds : [public_67501c]
        shl eax, 5
        mov byte ptr ds : [eax+ecx+0xD], dl
        mov eax, dword ptr ds : [public_675020]
        mov dl, byte ptr ds : [public_67504a]
        mov ecx, dword ptr ds : [public_67501c]
        shl eax, 5
        mov byte ptr ds : [eax+ecx+0xC], dl
        mov eax, dword ptr ds : [public_675020]
        mov ecx, dword ptr ds : [public_67501c]
        mov dl, byte ptr ds : [public_67504b]
        shl eax, 5
        mov byte ptr ds : [eax+ecx+0xF], dl
        fld dword ptr ds : [public_67504c]
        mov eax, dword ptr ds : [public_675020]
        mov ecx, dword ptr ds : [public_67501c]
        shl eax, 5
        fstp dword ptr ds : [eax+ecx+0x10]
        mov edx, dword ptr ds : [public_675020]
        mov eax, dword ptr ds : [public_67501c]
        fld dword ptr ds : [public_675050]
        shl edx, 5
        fstp dword ptr ds : [edx+eax+0x14]
        mov ecx, dword ptr ds : [public_675020]
        mov edx, dword ptr ds : [public_67501c]
        fld dword ptr ds : [public_675054]
        shl ecx, 5
        fstp dword ptr ds : [ecx+edx+0x18]
        mov eax, dword ptr ds : [public_675020]
        mov ecx, dword ptr ds : [public_67501c]
        fld dword ptr ds : [public_675058]
        shl eax, 5
        fstp dword ptr ds : [eax+ecx+0x1C]
        mov edx, dword ptr ds : [public_675020]
        mov eax, dword ptr ds : [public_67501c]
        fld dword ptr ss : [esp+0x48]
        shl edx, 5
        fstp dword ptr ds : [edx+eax]
        mov ecx, dword ptr ds : [public_675020]
        mov edx, dword ptr ds : [public_67501c]
        fld dword ptr ss : [esp+0x4C]
        shl ecx, 5
        fstp dword ptr ds : [ecx+edx+4]
        mov eax, dword ptr ds : [public_675020]
        mov ecx, dword ptr ds : [public_67501c]
        fld dword ptr ss : [esp+0x50]
        shl eax, 5
        fstp dword ptr ds : [eax+ecx+8]
        mov eax, dword ptr ds : [public_675020]
        inc eax
        mov ecx, offset public_675018
        mov dword ptr ds : [public_675020], eax
        call public_50c120
        mov edx, dword ptr ss : [ebp+0x54]
        fld dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [public_675050]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_67504c], eax
        fld dword ptr ss : [ebp+0x5C]
        mov eax, dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [public_675058]
        push edx
        mov dword ptr ds : [public_675054], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        mov ecx, offset public_675018
        call public_50bb60
        mov eax, dword ptr ss : [esp+0x44]
        inc ebx
        add esi, 2
        mov dword ptr ss : [esp+0x1C], esi
        cmp ebx, eax
        jle public_50b793
        public_50ba1c : nop
        mov edi, dword ptr ds : [public_675020]
        test edi, edi
        je public_50ba78
        mov al, byte ptr ds : [public_675040]
        test al, al
        je public_50ba4e
        mov esi, dword ptr ds : [public_67501c]
        shl edi, 5
        add edi, esi
        mov ecx, 8
        rep movsd
        mov edi, dword ptr ds : [public_675020]
        inc edi
        mov dword ptr ds : [public_675020], edi
        public_50ba4e : nop
        mov eax, dword ptr ds : [public_675030]
        test eax, eax
        je public_50ba91
        mov ecx, dword ptr ds : [public_67501c]
        mov edx, dword ptr ds : [eax]
        push 0
        push edi
        push ecx
        mov ecx, dword ptr ds : [public_675024]
        push ecx
        mov ecx, dword ptr ds : [public_675018]
        push ecx
        push eax
        call dword ptr ds : [edx+0x114]
        public_50ba78 : nop
        mov eax, dword ptr ds : [public_675030]
        test eax, eax
        je public_50ba91
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_675030], 0
        public_50ba91 : nop
        mov eax, dword ptr ss : [ebp+0x58]
        test eax, eax
        je public_50baaf
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_5db178 @0x50ba9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db178
        push 1
        push ecx
        call public_50bb20
        add esp, 0xC
        public_50baaf : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_50bac4 : nop
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0xD4], 1
        call public_405840
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xD4], 0
        call public_405840
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0xD4], 0xFFFFFFFF
        call public_405840
        pop edi
        pop esi
        public_50bafc : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC8
        ret 8
        UNREACHABLE_TRAP(0x50b510)
    }
}

#undef public_50b672
#undef public_50b705
#undef public_50b715
#undef public_50b793
#undef public_50b79e
#undef public_50b7a7
#undef public_50b7ed
#undef public_50b7f0
#undef public_50b801
#undef public_50b809
#undef public_50b8a9
#undef public_50b8af
#undef public_50ba1c
#undef public_50ba4e
#undef public_50ba78
#undef public_50ba91
#undef public_50baaf
#undef public_50bac4
#undef public_50bafc
