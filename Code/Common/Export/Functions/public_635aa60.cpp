#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aa60);

#define public_635aab6 _public_635aab6
#define public_635aabd _public_635aabd
#define public_635aae2 _public_635aae2
#define public_635aaf5 _public_635aaf5
#define public_635ab0c _public_635ab0c
#define public_635ab21 _public_635ab21
#define public_635ab38 _public_635ab38
#define public_635ab47 _public_635ab47
#define public_635ab6d _public_635ab6d

PROC_DECLARE(0x635aa60, internal_635aa60, public_635aa60);
extern "C" NAKED register_t __cdecl internal_635aa60()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x14]
        and eax, 0xFFFF
        shl eax, 4
        push edi
        mov edi, dword ptr ds : [esi]
        add eax, edi
        fld dword ptr ds : [eax+esi]
        add eax, esi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        movsx eax, word ptr ds : [esi+0xC]
        dec eax
        js public_635ab6d
        push ebx
        inc eax
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+0x34], eax
        public_635aab6 : nop
        mov edx, ebp
        mov ebx, 3
        public_635aabd : nop
        mov ecx, dword ptr ds : [edx]
        and ecx, 0xFFFF
        shl ecx, 4
        add ecx, edi
        fld dword ptr ds : [ecx+esi]
        add ecx, esi
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        je public_635aae2
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_635aaf5
        public_635aae2 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_635aaf5
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x20], eax
        public_635aaf5 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_635ab0c
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_635ab21
        public_635ab0c : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_635ab21
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x24], eax
        public_635ab21 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_635ab38
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_635ab47
        public_635ab38 : nop
        fcom dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 1
        je public_635ab47
        fstp st(0)
        fld dword ptr ds : [ecx+8]
        public_635ab47 : nop
        mov eax, edx
        and eax, 0xC
        add edx, dword ptr ds : [eax+public_63ee4e0]
        dec ebx
        jne public_635aabd
        mov eax, dword ptr ss : [esp+0x34]
        add ebp, 0x10
        dec eax
        mov dword ptr ss : [esp+0x34], eax
        jne public_635aab6
        pop ebp
        pop ebx
        public_635ab6d : nop
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xC]
        pop edi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0xC]
        pop esi
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x635aa60)
    }
}

#undef public_635aab6
#undef public_635aabd
#undef public_635aae2
#undef public_635aaf5
#undef public_635ab0c
#undef public_635ab21
#undef public_635ab38
#undef public_635ab47
#undef public_635ab6d
