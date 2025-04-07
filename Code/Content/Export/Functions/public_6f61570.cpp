#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f61570);
CLANG_FORWARD_PROC_SYMBOL(public_6f616d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

#define public_6f61596 _public_6f61596
#define public_6f615c0 _public_6f615c0
#define public_6f615e6 _public_6f615e6
#define public_6f6163c _public_6f6163c
#define public_6f61660 _public_6f61660
#define public_6f61665 _public_6f61665

PROC_DECLARE(0x6f61570, internal_6f61570, public_6f61570);
extern "C" NAKED register_t __cdecl internal_6f61570()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1ab8]
        mov al, 1
        sub esp, 0x20
        test al, cl
        jne public_6f61596
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_6f616d0 @0x6f61583*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f616d0
        mov byte ptr ds : [public_6fd1ab8], dl
        call public_6fa9162
        add esp, 4
        public_6f61596 : nop
        mov al, byte ptr ds : [public_6fd0eb4]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        jne public_6f6163c
        mov dword ptr ss : [esp+0x10], 0
        mov esi, offset public_6fd0eb8
        mov edi, 0x10
        lea esp, ss:[esp]
        public_6f615c0 : nop
        fild dword ptr ss : [esp+0x10]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, esi
        fmul dword ptr ds : [public_6fbbc50]
        fst qword ptr ss : [esp+0x18]
        fsin 
        fld qword ptr ss : [esp+0x18]
        fcos 
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        public_6f615e6 : nop
        fild dword ptr ss : [esp+0x14]
        mov ebx, ecx
        inc eax
        add ecx, 0xC0
        cmp eax, 0x10
        fmul qword ptr ds : [public_6fbbc48]
        mov dword ptr ss : [esp+0x14], eax
        fld st(0)
        fcos 
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x24]
        fsin 
        mov dword ptr ds : [ebx], ebp
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], edx
        jb public_6f615e6
        mov edx, dword ptr ss : [esp+0x10]
        fstp st(0)
        inc edx
        add esi, 0xC
        dec edi
        mov dword ptr ss : [esp+0x10], edx
        jne public_6f615c0
        mov byte ptr ds : [public_6fd0eb4], 1
        public_6f6163c : nop
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x38]
        sub esi, offset public_6fd0ec0
        mov eax, offset public_6fd0ec0
        mov dword ptr ss : [esp+0x34], 0x10
        nop 
        lea esp, ss:[esp]
        public_6f61660 : nop
        mov edx, 0x10
        public_6f61665 : nop
        fld dword ptr ds : [edi]
        lea ebx, ds:[esi+eax]
        fld st(0)
        add eax, 0xC
        dec edx
        fmul dword ptr ds : [eax-0x14]
        fld st(1)
        fmul dword ptr ds : [eax-0x10]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ds : [eax-0xC]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ecx+8]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ebx+4], ebp
        fstp dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+8], ebp
        jne public_6f61665
        dec dword ptr ss : [esp+0x34]
        jne public_6f61660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f61570)
    }
}

#undef public_6f61596
#undef public_6f615c0
#undef public_6f615e6
#undef public_6f6163c
#undef public_6f61660
#undef public_6f61665
