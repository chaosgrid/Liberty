#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_635cdd0);

#define public_635cdea _public_635cdea
#define public_635ce47 _public_635ce47
#define public_635ce5b _public_635ce5b
#define public_635ce5e _public_635ce5e
#define public_635ce67 _public_635ce67
#define public_635ce7b _public_635ce7b

PROC_DECLARE(0x635cdd0, internal_635cdd0, public_635cdd0);
extern "C" NAKED register_t __cdecl internal_635cdd0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        xor ebp, ebp
        mov bp, word ptr ds : [ebx+0x22]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        dec ebp
        js public_635ce5e
        public_635cdea : nop
        mov eax, dword ptr ds : [ebx+0x24]
        mov esi, dword ptr ds : [eax+ebp*4]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [edi+0x10]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edi+0x14]
        fld dword ptr ds : [esi+0x18]
        fsub dword ptr ds : [edi+0x18]
        fld dword ptr ds : [esi+0x20]
        fadd dword ptr ds : [edi+0x20]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_635ce5b
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ecx+0x16C]
        mov dx, word ptr ds : [ebx+2]
        cmp dx, word ptr ds : [ebx]
        jb public_635ce47
        mov ecx, ebx
        call public_63441a0
        public_635ce47 : nop
        mov ecx, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, word ptr ds : [ebx+2]
        mov dword ptr ds : [ecx+eax*4], esi
        inc word ptr ds : [ebx+2]
        mov ebx, dword ptr ss : [esp+0x1C]
        public_635ce5b : nop
        dec ebp
        jns public_635cdea
        public_635ce5e : nop
        xor esi, esi
        mov si, word ptr ds : [ebx+0x1A]
        dec esi
        js public_635ce7b
        public_635ce67 : nop
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [edx+esi*4]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push edi
        call public_635cdd0
        dec esi
        jns public_635ce67
        public_635ce7b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x635cdd0)
    }
}

#undef public_635cdea
#undef public_635ce47
#undef public_635ce5b
#undef public_635ce5e
#undef public_635ce67
#undef public_635ce7b
