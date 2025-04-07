#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9e0);
CLANG_FORWARD_PROC_SYMBOL(public_4de0a0);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4de0c6 _public_4de0c6
#define public_4de0e5 _public_4de0e5
#define public_4de0ef _public_4de0ef
#define public_4de0fd _public_4de0fd
#define public_4de17c _public_4de17c
#define public_4de211 _public_4de211
#define public_4de215 _public_4de215
#define public_4de236 _public_4de236
#define public_4de268 _public_4de268
#define public_4de289 _public_4de289
#define public_4de2e5 _public_4de2e5

PROC_DECLARE(0x4de0a0, internal_4de0a0, public_4de0a0);
extern "C" NAKED register_t __cdecl internal_4de0a0()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_4dd9e0
        mov eax, dword ptr ss : [ebp+0x590]
        xor ebx, ebx
        test eax, eax
        jne public_4de0c6
        xor ecx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_4de0e5
        public_4de0c6 : nop
        mov ecx, dword ptr ss : [ebp+0x594]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, edx
        public_4de0e5 : nop
        xor eax, eax
        cmp ecx, 0xA
        jle public_4de0ef
        lea eax, ds:[ecx-0xA]
        public_4de0ef : nop
        cmp dword ptr ss : [ebp+0x5C8], eax
        jbe public_4de0fd
        mov dword ptr ss : [ebp+0x5C8], eax
        public_4de0fd : nop
        fild dword ptr ds : [public_616840]
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x48]
        fsub dword ptr ds : [public_67dc60]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fild dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, 9
        rep movsd
        fsub dword ptr ds : [public_67dc64]
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x40], edx
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [public_674a9c]
        test eax, eax
        jne public_4de17c
        call public_5b73e0
        mov dword ptr ds : [public_674a9c], eax
        public_4de17c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [ebp+0x5C8]
        mov dword ptr ss : [esp+0x30], eax
        faddp 
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, eax
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        jge public_4de2e5
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x18], eax
        lea esi, ss:[ebp+0x508]
        jmp public_4de215
        public_4de211 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_4de215 : nop
        mov ecx, dword ptr ds : [public_679bb0]
        mov edx, dword ptr ss : [ebp+0x590]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ds : [edx+eax+0xC]
        test cl, cl
        je public_4de236
        mov eax, dword ptr ds : [public_679bac]
        mov dword ptr ss : [esp+0x10], eax
        public_4de236 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_4de268
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_4de268
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_4de289
        public_4de268 : nop
        call public_45a740
        test al, al
        jne public_4de289
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_561f20
        mov eax, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0x10], eax
        public_4de289 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        inc ebx
        add esi, 4
        cmp ebx, 0xA
        jge public_4de2e5
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        inc edi
        add eax, 0x24
        cmp edi, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_4de211
        public_4de2e5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x4de0a0)
    }
}

#undef public_4de0c6
#undef public_4de0e5
#undef public_4de0ef
#undef public_4de0fd
#undef public_4de17c
#undef public_4de211
#undef public_4de215
#undef public_4de236
#undef public_4de268
#undef public_4de289
#undef public_4de2e5
