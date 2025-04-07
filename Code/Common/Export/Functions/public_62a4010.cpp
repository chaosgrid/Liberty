#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a4010);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62a4036 _public_62a4036
#define public_62a4045 _public_62a4045
#define public_62a4091 _public_62a4091
#define public_62a413f _public_62a413f
#define public_62a4149 _public_62a4149
#define public_62a4168 _public_62a4168
#define public_62a419d _public_62a419d
#define public_62a41a7 _public_62a41a7
#define public_62a41c0 _public_62a41c0
#define public_62a41f3 _public_62a41f3
#define public_62a41fd _public_62a41fd
#define public_62a4217 _public_62a4217

PROC_DECLARE(0x62a4010, internal_62a4010, public_62a4010);
extern "C" NAKED register_t __cdecl internal_62a4010()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        imul ecx, 0x343FD
        add ecx, 0x269EC3
        xor eax, eax
        mov dword ptr ds : [public_63fc290], ecx
        mov ax, word ptr ds : [public_63fc292]
        shr eax, 0xD
        and eax, 3
        jle public_62a4045
        public_62a4036 : nop
        imul ecx, 0x343FD
        add ecx, 0x269EC3
        dec eax
        jne public_62a4036
        public_62a4045 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62a4091
        imul ecx, 0x343FD
        add ecx, 0x269EC3
        xor eax, eax
        mov dword ptr ds : [public_63fc290], ecx
        mov ax, word ptr ds : [public_63fc292]
        and eax, 0x7FFF
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_63997d0]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_62a4091
        xor al, al
        ret 
        public_62a4091 : nop
        imul ecx, 0x343FD
        push ebx
        add ecx, 0x269EC3
        push ebp
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr ds : [public_63fc290], esi
        mov cx, word ptr ds : [public_63fc292]
        push edi
        and ecx, 0x7FFF
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639dd0c]
        call public_6391dae
        imul esi, 0x343FD
        add esi, 0x269EC3
        xor edx, edx
        mov dword ptr ds : [public_63fc290], esi
        mov dx, word ptr ds : [public_63fc292]
        mov edi, eax
        and edx, 0x7FFF
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639dd0c]
        call public_6391dae
        imul esi, 0x343FD
        mov ebx, eax
        add esi, 0x269EC3
        xor eax, eax
        mov dword ptr ds : [public_63fc290], esi
        mov ax, word ptr ds : [public_63fc292]
        and eax, 0x7FFF
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639dd0c]
        call public_6391dae
        test edi, edi
        mov ecx, edi
        jge public_62a413f
        xor ecx, ecx
        jmp public_62a4149
        public_62a413f : nop
        cmp edi, 3
        jle public_62a4149
        mov ecx, 3
        public_62a4149 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+ecx*4]
        mov ebp, dword ptr ss : [esp+0x18]
        fld st(0)
        lea esi, ss:[ebp+0x18]
        fcos 
        mov ecx, esi
        mov edx, 3
        fstp dword ptr ss : [esp+0x20]
        fsin 
        public_62a4168 : nop
        fld dword ptr ds : [ecx-0xC]
        add ecx, 4
        dec edx
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [ecx-4]
        fsubp 
        fstp dword ptr ds : [ecx-0x10]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [ecx-4]
        jne public_62a4168
        test ebx, ebx
        fstp st(0)
        mov ecx, ebx
        jge public_62a419d
        xor ecx, ecx
        jmp public_62a41a7
        public_62a419d : nop
        cmp ebx, 3
        jle public_62a41a7
        mov ecx, 3
        public_62a41a7 : nop
        fld dword ptr ds : [edi+ecx*4+0x10]
        mov ecx, esi
        fld st(0)
        mov edx, 3
        fcos 
        fstp dword ptr ss : [esp+0x20]
        fsin 
        lea esp, ss:[esp]
        public_62a41c0 : nop
        fld dword ptr ds : [ecx-0x18]
        add ecx, 4
        dec edx
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [ecx-4]
        faddp 
        fstp dword ptr ds : [ecx-0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [ecx-4]
        jne public_62a41c0
        test eax, eax
        fstp st(0)
        jge public_62a41f3
        xor eax, eax
        jmp public_62a41fd
        public_62a41f3 : nop
        cmp eax, 3
        jle public_62a41fd
        mov eax, 3
        public_62a41fd : nop
        fld dword ptr ds : [edi+eax*4+0x20]
        pop edi
        fld st(0)
        pop esi
        fcos 
        lea eax, ss:[ebp+0xC]
        pop ebp
        mov ecx, 3
        pop ebx
        fstp dword ptr ss : [esp+0x10]
        fsin 
        public_62a4217 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_62a4217
        fstp st(0)
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62a4010)
    }
}

#undef public_62a4036
#undef public_62a4045
#undef public_62a4091
#undef public_62a413f
#undef public_62a4149
#undef public_62a4168
#undef public_62a419d
#undef public_62a41a7
#undef public_62a41c0
#undef public_62a41f3
#undef public_62a41fd
#undef public_62a4217
