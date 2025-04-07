#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21000);
CLANG_FORWARD_PROC_SYMBOL(public_6f22030);
CLANG_FORWARD_PROC_SYMBOL(public_6f23630);
CLANG_FORWARD_PROC_SYMBOL(public_6f23de0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f240d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24130);
CLANG_FORWARD_PROC_SYMBOL(public_6f24140);
CLANG_FORWARD_PROC_SYMBOL(public_6f247d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58408);

#define public_6f2208f _public_6f2208f
#define public_6f220b2 _public_6f220b2
#define public_6f220f0 _public_6f220f0
#define public_6f22189 _public_6f22189
#define public_6f221b1 _public_6f221b1
#define public_6f221b8 _public_6f221b8
#define public_6f221c3 _public_6f221c3
#define public_6f221cb _public_6f221cb
#define public_6f221fa _public_6f221fa
#define public_6f22252 _public_6f22252
#define public_6f2227c _public_6f2227c
#define public_6f222a4 _public_6f222a4
#define public_6f222a7 _public_6f222a7

PROC_DECLARE(0x6f22030, internal_6f22030, public_6f22030);
extern "C" NAKED register_t __cdecl internal_6f22030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58408 @0x6f22032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58408
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        mov al, byte ptr ss : [esp+0x4C]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0x2C], al
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], ebp
        mov esi, dword ptr ds : [edi+8]
        inc esi
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f2208f
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6f23630
        sub esi, eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x38]
        call public_6f23e30
        jmp public_6f220b2
        public_6f2208f : nop
        lea ecx, ss:[esp+0x2C]
        call public_6f23630
        cmp esi, eax
        jae public_6f220b2
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ds:[eax+esi*4]
        push edx
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6f240d0
        public_6f220b2 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        mov ebx, dword ptr ss : [esp+0x64]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push ebp
        push eax
        mov eax, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6f21000
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi+8]
        xor esi, esi
        cmp eax, ebp
        jbe public_6f22189
        public_6f220f0 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        lea ebp, ds:[esi+1]
        mov dword ptr ss : [esp+0x64], ebp
        fild dword ptr ss : [esp+0x64]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [edi+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        push eax
        mov eax, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_6f21000
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ecx
        fsub dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        fld st(0)
        mov dword ptr ss : [esp+0x28], eax
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        mov dword ptr ss : [esp+0x24], edx
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fadd dword ptr ds : [ebx]
        fst dword ptr ds : [ebx]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [ecx+esi*4+4]
        mov eax, dword ptr ds : [edi+8]
        mov esi, ebp
        cmp esi, eax
        jb public_6f220f0
        xor ebp, ebp
        public_6f22189 : nop
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [edi+0x48]
        shl esi, 4
        add esi, ecx
        lea edx, ss:[esp+0x2C]
        cmp esi, edx
        je public_6f222a7
        mov edi, dword ptr ss : [esp+0x30]
        cmp edi, ebp
        mov ebx, dword ptr ss : [esp+0x34]
        jne public_6f221b1
        xor edx, edx
        jmp public_6f221b8
        public_6f221b1 : nop
        mov edx, ebx
        sub edx, edi
        sar edx, 2
        public_6f221b8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        jne public_6f221c3
        xor eax, eax
        jmp public_6f221cb
        public_6f221c3 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f221cb : nop
        cmp edx, eax
        ja public_6f221fa
        push ecx
        push ebx
        push edi
        call public_6f247d0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_6f24130
        lea ecx, ss:[esp+0x2C]
        call public_6f23630
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f222a4
        public_6f221fa : nop
        mov ecx, esi
        call public_6f23de0
        lea ecx, ss:[esp+0x2C]
        mov edi, eax
        call public_6f23630
        cmp eax, edi
        ja public_6f22252
        mov edi, dword ptr ss : [esp+0x30]
        mov ecx, esi
        call public_6f23630
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        lea edi, ds:[edi+eax*4]
        push edi
        push edx
        call public_6f247d0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 0xC
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f24140
        lea ecx, ss:[esp+0x2C]
        call public_6f23630
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f222a4
        public_6f22252 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f24130
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        call public_6f23630
        cmp eax, ebp
        jge public_6f2227c
        xor eax, eax
        public_6f2227c : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push edx
        push eax
        mov ecx, esi
        call public_6f24140
        mov dword ptr ds : [esi+0xC], eax
        public_6f222a4 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f222a7 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 0x1C
        UNREACHABLE_TRAP(0x6f22030)
    }
}

#undef public_6f2208f
#undef public_6f220b2
#undef public_6f220f0
#undef public_6f22189
#undef public_6f221b1
#undef public_6f221b8
#undef public_6f221c3
#undef public_6f221cb
#undef public_6f221fa
#undef public_6f22252
#undef public_6f2227c
#undef public_6f222a4
#undef public_6f222a7
