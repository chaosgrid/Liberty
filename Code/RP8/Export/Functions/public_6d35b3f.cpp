#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d35a3f);
CLANG_FORWARD_PROC_SYMBOL(public_6d35b3f);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d093);

#define public_6d35b6e _public_6d35b6e
#define public_6d35c06 _public_6d35c06
#define public_6d35c0d _public_6d35c0d
#define public_6d35c4f _public_6d35c4f
#define public_6d35c51 _public_6d35c51
#define public_6d35c95 _public_6d35c95
#define public_6d35cbc _public_6d35cbc
#define public_6d35ccb _public_6d35ccb
#define public_6d35ce0 _public_6d35ce0
#define public_6d35cfc _public_6d35cfc
#define public_6d35ebd _public_6d35ebd
#define public_6d35ee8 _public_6d35ee8
#define public_6d35eec _public_6d35eec
#define public_6d35ef1 _public_6d35ef1
#define public_6d35f18 _public_6d35f18

PROC_DECLARE(0x6d35b3f, internal_6d35b3f, public_6d35b3f);
extern "C" NAKED register_t __cdecl internal_6d35b3f()
{
    __asm
    {
        mov eax, public_6d5d093
        call public_6d5cd8c
        sub esp, 0xC4
        and dword ptr ss : [ebp-0x14], 0
        and dword ptr ss : [ebp-0x1C], 0
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        cmp al, 3
        mov dword ptr ss : [ebp-0x40], esi
        je public_6d35b6e
        mov eax, 0x80004005
        jmp public_6d35f18
        public_6d35b6e : nop
        mov ecx, eax
        shr ecx, 0x10
        shr eax, 0x11
        push ebx
        not ecx
        not eax
        and ecx, 1
        and eax, 1
        push edi
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+0x1058]
        push ecx
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ecx+0x1058]
        call public_6d35a3f
        mov ecx, dword ptr ds : [esi]
        push dword ptr ss : [ebp-0x10]
        mov edi, dword ptr ds : [ecx+0x105C]
        mov dword ptr ss : [ebp-0x30], eax
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+0x105C]
        call public_6d35a3f
        cmp dword ptr ss : [ebp-0x30], 0
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp-0x10], eax
        je public_6d35eec
        test eax, eax
        je public_6d35eec
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+0x1058]
        mov eax, ebx
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        mov edi, offset _public_6d2f87d
        je public_6d35c06
        push edi
        push ebx
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x20], eax
        jmp public_6d35c0d
        public_6d35c06 : nop
        and dword ptr ss : [ebp-0x20], 0
        mov eax, dword ptr ss : [ebp-0x20]
        public_6d35c0d : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x14], eax
        je public_6d35eec
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax+0x1058]
        shl ebx, 1
        mov eax, ebx
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d35c4f
        push edi
        push ebx
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x1C]
        jmp public_6d35c51
        public_6d35c4f : nop
        xor eax, eax
        public_6d35c51 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x1C], eax
        je public_6d35eec
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ecx+0x1058]
        and dword ptr ss : [ebp-0x28], 0
        or dword ptr ss : [ebp-0x24], 0xFFFFFFFF
        or dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        shl ebx, 4
        add ebx, eax
        mov dword ptr ss : [ebp-0x2C], eax
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ds : [eax+0x105C], 0
        jbe public_6d35ee8
        mov edi, dword ptr ss : [ebp-0x10]
        add edi, 8
        mov dword ptr ss : [ebp-0x38], edi
        public_6d35c95 : nop
        mov eax, dword ptr ds : [edi-8]
        and dword ptr ss : [ebp-0x34], 0
        cmp eax, dword ptr ss : [ebp-0x24]
        je public_6d35ccb
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp eax, ecx
        je public_6d35cbc
        push dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ds : [ecx]
        push 0
        push dword ptr ss : [ebp-0x24]
        call dword ptr ds : [eax+4]
        jmp public_6d35ccb
        public_6d35cbc : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        or dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x2C], ebx
        mov dword ptr ss : [ebp-0x24], ecx
        mov ebx, eax
        public_6d35ccb : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ss : [ebp-0x18]
        je public_6d35ce0
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 0
        push eax
        mov dword ptr ss : [ebp-0x18], eax
        call dword ptr ds : [edx+4]
        public_6d35ce0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ds : [eax+0x1058], 0
        jbe public_6d35ebd
        mov eax, dword ptr ss : [ebp-0x30]
        mov ecx, dword ptr ss : [ebp-0x20]
        add eax, 8
        mov dword ptr ss : [ebp-0x3C], ecx
        public_6d35cfc : nop
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fld st(0)
        shl ecx, 4
        lea edx, ds:[ecx+ebx]
        fmul dword ptr ds : [edx]
        fstp dword ptr ss : [ebp-0x50]
        fld st(0)
        fmul dword ptr ds : [edx+4]
        fstp dword ptr ss : [ebp-0x4C]
        fld st(0)
        fmul dword ptr ds : [edx+8]
        fstp dword ptr ss : [ebp-0x48]
        fmul dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [eax-8]
        fld dword ptr ds : [eax-4]
        shl edx, 4
        fld st(0)
        lea esi, ds:[edx+ebx]
        fmul dword ptr ds : [esi]
        fld st(1)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0x9C]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-0x98]
        fld st(1)
        fmul dword ptr ds : [esi+0xC]
        mov esi, dword ptr ss : [ebp-0x2C]
        add ecx, esi
        fstp dword ptr ss : [ebp-0x94]
        fadd dword ptr ss : [ebp-0x50]
        fstp dword ptr ss : [ebp-0x80]
        fstp st(0)
        fld dword ptr ss : [ebp-0x9C]
        fadd dword ptr ss : [ebp-0x4C]
        fstp dword ptr ss : [ebp-0x7C]
        fld dword ptr ss : [ebp-0x98]
        fadd dword ptr ss : [ebp-0x48]
        fstp dword ptr ss : [ebp-0x78]
        fld dword ptr ss : [ebp-0x94]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [edi+4]
        fld dword ptr ss : [ebp-0x80]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xB0]
        fld dword ptr ss : [ebp-0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xAC]
        fld dword ptr ss : [ebp-0x78]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xA8]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp-0xC0]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0xBC]
        fld st(0)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0xB8]
        fmul dword ptr ds : [ecx+0xC]
        lea ecx, ds:[edx+esi]
        fld dword ptr ds : [eax-4]
        lea esi, ss:[ebp-0xD0]
        fld st(0)
        add eax, 0x10
        fmul dword ptr ds : [ecx]
        inc dword ptr ss : [ebp-0x34]
        fld st(1)
        mov edx, dword ptr ss : [ebp-0x34]
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0x5C]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0x58]
        fld st(1)
        fmul dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp-0x40]
        fstp dword ptr ss : [ebp-0x54]
        fadd dword ptr ss : [ebp-0xC0]
        fstp dword ptr ss : [ebp-0x70]
        fstp st(0)
        fld dword ptr ss : [ebp-0x5C]
        fadd dword ptr ss : [ebp-0xBC]
        fstp dword ptr ss : [ebp-0x6C]
        fld dword ptr ss : [ebp-0x58]
        fadd dword ptr ss : [ebp-0xB8]
        fstp dword ptr ss : [ebp-0x68]
        fld dword ptr ss : [ebp-0x54]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [edi-4]
        mov edi, dword ptr ss : [ebp-0x3C]
        fld dword ptr ss : [ebp-0x70]
        add dword ptr ss : [ebp-0x3C], 0x10
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x90]
        fld dword ptr ss : [ebp-0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x8C]
        fld dword ptr ss : [ebp-0x68]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x88]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [ebp-0x90]
        fadd dword ptr ss : [ebp-0xB0]
        fstp dword ptr ss : [ebp-0xD0]
        fld dword ptr ss : [ebp-0x8C]
        fadd dword ptr ss : [ebp-0xAC]
        fstp dword ptr ss : [ebp-0xCC]
        fld dword ptr ss : [ebp-0x88]
        fadd dword ptr ss : [ebp-0xA8]
        fstp dword ptr ss : [ebp-0xC8]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0xC4]
        movsd 
        fstp st(0)
        movsd 
        movsd 
        movsd 
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+0x1058]
        mov edi, dword ptr ss : [ebp-0x38]
        jb public_6d35cfc
        mov esi, dword ptr ss : [ebp-0x40]
        public_6d35ebd : nop
        push dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push dword ptr ss : [ebp-0x28]
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+4]
        add edi, 0x10
        inc dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x28]
        cmp ecx, dword ptr ds : [eax+0x105C]
        mov dword ptr ss : [ebp-0x38], edi
        jb public_6d35c95
        public_6d35ee8 : nop
        xor esi, esi
        jmp public_6d35ef1
        public_6d35eec : nop
        mov esi, 0x8007000E
        public_6d35ef1 : nop
        push dword ptr ss : [ebp-0x30]
        call public_6d2f249
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        push dword ptr ss : [ebp-0x1C]
        call public_6d2f249
        add esp, 0x10
        pop edi
        mov eax, esi
        pop ebx
        public_6d35f18 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d35b3f)
    }
}

#undef public_6d35b6e
#undef public_6d35c06
#undef public_6d35c0d
#undef public_6d35c4f
#undef public_6d35c51
#undef public_6d35c95
#undef public_6d35cbc
#undef public_6d35ccb
#undef public_6d35ce0
#undef public_6d35cfc
#undef public_6d35ebd
#undef public_6d35ee8
#undef public_6d35eec
#undef public_6d35ef1
#undef public_6d35f18
