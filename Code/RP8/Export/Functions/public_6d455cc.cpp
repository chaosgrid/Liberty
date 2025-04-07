#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44341);
CLANG_FORWARD_PROC_SYMBOL(public_6d455cc);

#define public_6d4565f _public_6d4565f
#define public_6d456df _public_6d456df
#define public_6d456e8 _public_6d456e8

PROC_DECLARE(0x6d455cc, internal_6d455cc, public_6d455cc);
extern "C" NAKED register_t __cdecl internal_6d455cc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        xor esi, esi
        mov si, word ptr ds : [ebx]
        push edi
        lea eax, ss:[ebp-0x58]
        mov ecx, esi
        call public_6d44341
        xor edi, edi
        mov di, word ptr ds : [ebx+2]
        lea eax, ss:[ebp-0x48]
        mov ecx, edi
        call public_6d44341
        cmp si, di
        ja public_6d4565f
        fld dword ptr ds : [public_6d5f1fc]
        lea esi, ss:[ebp-0x18]
        fld dword ptr ss : [ebp-0x48]
        lea edi, ss:[ebp-0x28]
        fsub dword ptr ss : [ebp-0x58]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x58]
        fstp dword ptr ss : [ebp-0x38]
        fld dword ptr ss : [ebp-0x44]
        fsub dword ptr ss : [ebp-0x54]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x54]
        fstp dword ptr ss : [ebp-0x34]
        fld dword ptr ss : [ebp-0x40]
        fsub dword ptr ss : [ebp-0x50]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x50]
        fstp dword ptr ss : [ebp-0x30]
        fld dword ptr ss : [ebp-0x3C]
        fsub dword ptr ss : [ebp-0x4C]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x4C]
        fstp dword ptr ss : [ebp-0x2C]
        fstp st(0)
        fldz 
        fstp dword ptr ss : [ebp-0x18]
        fldz 
        fstp dword ptr ss : [ebp-0x14]
        fldz 
        fstp dword ptr ss : [ebp-0x10]
        fldz 
        fstp dword ptr ss : [ebp-0xC]
        movsd 
        movsd 
        movsd 
        movsd 
        jmp public_6d456df
        public_6d4565f : nop
        fld dword ptr ss : [ebp-0x48]
        fsub dword ptr ss : [ebp-0x58]
        fld dword ptr ds : [public_6d5f624]
        fld st(1)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x58]
        fstp dword ptr ss : [ebp-0x38]
        fld dword ptr ss : [ebp-0x44]
        fsub dword ptr ss : [ebp-0x54]
        fst dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x54]
        fstp dword ptr ss : [ebp-0x34]
        fld dword ptr ss : [ebp-0x40]
        fsub dword ptr ss : [ebp-0x50]
        fst dword ptr ss : [ebp-4]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x50]
        fstp dword ptr ss : [ebp-0x30]
        fld dword ptr ss : [ebp-0x3C]
        fsub dword ptr ss : [ebp-0x4C]
        fst dword ptr ss : [ebp-8]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x4C]
        fstp dword ptr ss : [ebp-0x2C]
        fstp st(0)
        fld dword ptr ds : [public_6d61104]
        fld st(1)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x58]
        fstp dword ptr ss : [ebp-0x28]
        fld dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x54]
        fstp dword ptr ss : [ebp-0x24]
        fld dword ptr ss : [ebp-4]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x50]
        fstp dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp-8]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x4C]
        fstp dword ptr ss : [ebp-0x1C]
        fstp st(0)
        fstp st(0)
        public_6d456df : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [ebp+8]
        push 0x10
        pop ecx
        public_6d456e8 : nop
        mov edx, ebx
        and edx, 3
        shl edx, 4
        mov edi, eax
        lea esi, ss:[ebp+edx-0x58]
        movsd 
        movsd 
        movsd 
        add eax, 0x10
        shr ebx, 2
        dec ecx
        movsd 
        jne public_6d456e8
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d455cc)
    }
}

#undef public_6d4565f
#undef public_6d456df
#undef public_6d456e8
