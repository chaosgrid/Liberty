#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34efc);

#define public_6c293ed _public_6c293ed
#define public_6c293ef _public_6c293ef
#define public_6c29444 _public_6c29444
#define public_6c29486 _public_6c29486
#define public_6c2949a _public_6c2949a
#define public_6c294c0 _public_6c294c0
#define public_6c294d8 _public_6c294d8
#define public_6c294e2 _public_6c294e2

PROC_DECLARE(0x6c293a0, internal_6c293a0, public_6c293a0);
extern "C" NAKED register_t __cdecl internal_6c293a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6c294e2
        mov esi, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x8C]
        add esi, 0x8C
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebp
        jbe public_6c294e2
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edi+0x10]
        fst dword ptr ds : [edi+0x10]
        fcom dword ptr ds : [esi+0x18]
        fnstsw ax
        test ah, 1
        jne public_6c293ed
        fsub dword ptr ds : [esi+0x18]
        fstp dword ptr ds : [edi+0x10]
        jmp public_6c293ef
        public_6c293ed : nop
        fstp st(0)
        public_6c293ef : nop
        fld dword ptr ds : [edi+0x10]
        mov ebx, dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0x10]
        dec ebx
        fld st(0)
        call public_6c34efc
        xor edx, edx
        div ebx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov ebx, edx
        mov dword ptr ss : [esp+0x10], ebx
        fild dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        je public_6c2949a
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, edx
        imul eax, ebx
        lea edi, ds:[ecx+eax*8]
        add eax, edx
        lea ebx, ds:[ecx+eax*8]
        xor ecx, ecx
        test edx, edx
        jbe public_6c294e2
        mov ebp, ebx
        sub ebp, edi
        lea eax, ds:[edi+4]
        mov dword ptr ss : [esp+0x24], ebp
        public_6c29444 : nop
        mov edx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edx+ecx*4]
        cmp edx, 0xFFFFFFFF
        je public_6c29486
        fld dword ptr ds : [ebx+ecx*8]
        mov edi, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax-4]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax-4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+ebp]
        mov ebp, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax]
        mov dword ptr ds : [edi+edx*8], ebp
        fstp dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+edx*8+4], ebp
        mov ebp, dword ptr ss : [esp+0x24]
        public_6c29486 : nop
        mov edx, dword ptr ds : [esi]
        inc ecx
        add eax, 8
        cmp ecx, edx
        jb public_6c29444
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_6c2949a : nop
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x10]
        call public_6c34efc
        cmp ebx, eax
        je public_6c294e2
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        imul ecx, ebx
        lea edx, ds:[edx+ecx*8]
        xor ecx, ecx
        test eax, eax
        jbe public_6c294e2
        public_6c294c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+ecx*4]
        cmp eax, 0xFFFFFFFF
        je public_6c294d8
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [ebp+eax*8], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+eax*8+4], edi
        public_6c294d8 : nop
        mov eax, dword ptr ds : [esi]
        inc ecx
        add edx, 8
        cmp ecx, eax
        jb public_6c294c0
        public_6c294e2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6c293a0)
    }
}

#undef public_6c293ed
#undef public_6c293ef
#undef public_6c29444
#undef public_6c29486
#undef public_6c2949a
#undef public_6c294c0
#undef public_6c294d8
#undef public_6c294e2
