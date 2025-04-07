#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d58bd2);

#define public_6d58c11 _public_6d58c11
#define public_6d58c7d _public_6d58c7d
#define public_6d58df3 _public_6d58df3
#define public_6d58e13 _public_6d58e13

PROC_DECLARE(0x6d58bd2, internal_6d58bd2, public_6d58bd2);
extern "C" NAKED register_t __cdecl internal_6d58bd2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x118
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [public_6d62304]
        mov eax, dword ptr ds : [eax+0x11C]
        fld dword ptr ds : [public_6d62300]
        mov edx, dword ptr ss : [ebp+0x10]
        add eax, 0x80
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x50]
        push ebx
        push esi
        lea eax, ss:[ebp-0x118]
        mov dword ptr ss : [ebp-0x18], 8
        push edi
        public_6d58c11 : nop
        xor edi, edi
        mov di, word ptr ds : [edx+0x20]
        xor ebx, ebx
        mov bx, word ptr ds : [edx+0x10]
        mov si, word ptr ds : [edx+0x70]
        or ebx, edi
        xor edi, edi
        mov di, word ptr ds : [edx+0x30]
        or ebx, edi
        xor edi, edi
        mov di, word ptr ds : [edx+0x40]
        or ebx, edi
        xor edi, edi
        mov di, word ptr ds : [edx+0x50]
        or ebx, edi
        xor edi, edi
        mov di, word ptr ds : [edx+0x60]
        or ebx, edi
        or ebx, esi
        test bx, bx
        jne public_6d58c7d
        movsx esi, word ptr ds : [edx]
        mov dword ptr ss : [ebp+8], esi
        fild dword ptr ss : [ebp+8]
        fmul dword ptr ds : [ecx]
        fst dword ptr ds : [eax]
        fst dword ptr ds : [eax+0x20]
        fst dword ptr ds : [eax+0x40]
        fst dword ptr ds : [eax+0x60]
        fst dword ptr ds : [eax+0x80]
        fst dword ptr ds : [eax+0xA0]
        fst dword ptr ds : [eax+0xC0]
        fstp dword ptr ds : [eax+0xE0]
        jmp public_6d58df3
        public_6d58c7d : nop
        movsx ebx, word ptr ds : [edx]
        mov dword ptr ss : [ebp+8], ebx
        movsx ebx, word ptr ds : [edx+0x20]
        fild dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+8], ebx
        movsx ebx, word ptr ds : [edx+0x40]
        mov dword ptr ss : [ebp+0x10], ebx
        fmul dword ptr ds : [ecx]
        movsx edi, di
        fld dword ptr ds : [ecx+0x40]
        fild dword ptr ss : [ebp+8]
        fmulp 
        fstp dword ptr ss : [ebp+8]
        fld dword ptr ds : [ecx+0x80]
        fild dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x10], edi
        movsx edi, word ptr ds : [edx+0x10]
        fmulp 
        fld dword ptr ds : [ecx+0xC0]
        fild dword ptr ss : [ebp+0x10]
        fmulp 
        fstp dword ptr ss : [ebp+0x10]
        fld st(0)
        fadd st, st(2)
        fstp dword ptr ss : [ebp+0xC]
        fld st(1)
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [ebp+0x10]
        fadd dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [ebp+0x10]
        fmul st, st(4)
        fsub st, st(1)
        fld st(1)
        fadd dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], edi
        fsub st, st(2)
        movsx edi, word ptr ds : [edx+0x30]
        fstp dword ptr ss : [ebp+0x10]
        fld st(0)
        fadd st, st(3)
        fstp dword ptr ss : [ebp+8]
        fld st(2)
        fsub st, st(1)
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [ecx+0x20]
        fild dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], edi
        movsx edi, word ptr ds : [edx+0x50]
        fmulp 
        fld dword ptr ds : [ecx+0x60]
        fild dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], edi
        fmulp 
        fld dword ptr ds : [ecx+0xA0]
        fild dword ptr ss : [ebp+0xC]
        fmulp 
        movsx esi, si
        mov dword ptr ss : [ebp-0xC], esi
        fstp dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+0xE0]
        fild dword ptr ss : [ebp-0xC]
        fmulp 
        fld dword ptr ss : [ebp+0xC]
        fadd st, st(2)
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0xC]
        fsub st, st(2)
        fstp dword ptr ss : [ebp+0xC]
        fld st(0)
        fadd st, st(3)
        fstp dword ptr ss : [ebp-4]
        fld st(2)
        fsub st, st(1)
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-4]
        fadd dword ptr ss : [ebp-8]
        fld st(1)
        fadd dword ptr ss : [ebp+0xC]
        fmul st, st(4)
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [public_6d622fc]
        fsubr dword ptr ss : [ebp-0xC]
        fsub st, st(1)
        fld dword ptr ss : [ebp-4]
        fsub dword ptr ss : [ebp-8]
        fmul st, st(6)
        fsub st, st(1)
        fst dword ptr ss : [ebp-4]
        fld st(3)
        fmul dword ptr ds : [public_6d622f8]
        fsub dword ptr ss : [ebp-0xC]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld st(1)
        fadd dword ptr ss : [ebp-0x14]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-0x14]
        fsub st, st(2)
        fstp dword ptr ds : [eax+0xE0]
        fld dword ptr ss : [ebp+8]
        fadd st, st(1)
        fstp dword ptr ds : [eax+0x20]
        fld dword ptr ss : [ebp+8]
        fsub st, st(1)
        fstp dword ptr ds : [eax+0xC0]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-4]
        fadd st, st(1)
        fstp dword ptr ds : [eax+0x40]
        fsub dword ptr ss : [ebp-4]
        fstp dword ptr ds : [eax+0xA0]
        fld dword ptr ss : [ebp-8]
        fadd dword ptr ss : [ebp+0x10]
        fstp dword ptr ds : [eax+0x80]
        fld dword ptr ss : [ebp+0x10]
        fsub dword ptr ss : [ebp-8]
        fstp dword ptr ds : [eax+0x60]
        public_6d58df3 : nop
        inc edx
        add ecx, 4
        inc edx
        add eax, 4
        dec dword ptr ss : [ebp-0x18]
        jne public_6d58c11
        and dword ptr ss : [ebp-0xC], 0
        lea esi, ss:[ebp-0x110]
        mov ebx, 0x3FF
        public_6d58e13 : nop
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [ebp+0x14]
        fadd dword ptr ds : [esi-8]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ds : [eax+ecx*4]
        add edi, dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [esi-8]
        fsub dword ptr ds : [esi+8]
        fld dword ptr ds : [esi]
        fadd dword ptr ds : [esi+0x10]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [esi+0x10]
        fmul st, st(4)
        fsub st, st(1)
        fld st(1)
        fadd dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp+0xC]
        fsub st, st(2)
        fstp dword ptr ss : [ebp+0x10]
        fld st(0)
        fadd st, st(3)
        fstp dword ptr ss : [ebp+8]
        fld st(2)
        fsub st, st(1)
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [esi+4]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [esi+0x14]
        fadd dword ptr ds : [esi-4]
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ds : [esi-4]
        fsub dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [ebp-0x18]
        fadd dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-0x18]
        fadd dword ptr ss : [ebp+0xC]
        fmul st, st(3)
        fld dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [public_6d622fc]
        fsubr st, st(1)
        fsub st, st(2)
        fst dword ptr ss : [ebp+0xC]
        fld dword ptr ss : [ebp-4]
        fsub dword ptr ss : [ebp-8]
        fmul st, st(6)
        fsub st, st(1)
        fst dword ptr ss : [ebp-4]
        fstp st(1)
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d622f8]
        fsub st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-0x14]
        fadd st, st(1)
        call public_6d2f2b2
        fld dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x10]
        fsub st, st(1)
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi], al
        call public_6d2f2b2
        mov ecx, dword ptr ss : [ebp-0x10]
        fstp st(0)
        fld dword ptr ss : [ebp+0xC]
        add eax, 4
        fadd dword ptr ss : [ebp+8]
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi+7], al
        call public_6d2f2b2
        fld dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        fsub dword ptr ss : [ebp+0xC]
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi+1], al
        call public_6d2f2b2
        fld dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x10]
        fadd st, st(1)
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi+6], al
        call public_6d2f2b2
        fsub dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x10]
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi+2], al
        call public_6d2f2b2
        fld dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0x10]
        fadd dword ptr ss : [ebp+0x10]
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi+5], al
        call public_6d2f2b2
        fld dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-0x10]
        fsub dword ptr ss : [ebp-8]
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [edi+4], al
        call public_6d2f2b2
        mov ecx, dword ptr ss : [ebp-0x10]
        add eax, 4
        sar eax, 3
        and eax, ebx
        mov al, byte ptr ds : [eax+ecx]
        add esi, 0x20
        inc dword ptr ss : [ebp-0xC]
        cmp dword ptr ss : [ebp-0xC], 8
        mov byte ptr ds : [edi+3], al
        jl public_6d58e13
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d58bd2)
    }
}

#undef public_6d58c11
#undef public_6d58c7d
#undef public_6d58df3
#undef public_6d58e13
