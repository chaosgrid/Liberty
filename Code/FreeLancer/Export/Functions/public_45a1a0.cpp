#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a1a0);
CLANG_FORWARD_PROC_SYMBOL(public_59d560);
CLANG_FORWARD_PROC_SYMBOL(public_59d570);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_45a1c0 _public_45a1c0
#define public_45a1e6 _public_45a1e6
#define public_45a215 _public_45a215
#define public_45a219 _public_45a219
#define public_45a258 _public_45a258

PROC_DECLARE(0x45a1a0, internal_45a1a0, public_45a1a0);
extern "C" NAKED register_t __cdecl internal_45a1a0()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c94f8]
        fnstsw ax
        test ah, 5
        jp public_45a1c0
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 
        public_45a1c0 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 5
        jp public_45a1e6
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+1], 0x80
        mov byte ptr ds : [eax+2], 0x40
        mov byte ptr ds : [eax], 0xFF
        mov byte ptr ds : [eax+3], 0xFF
        pop ecx
        ret 
        public_45a1e6 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c8930]
        fnstsw ax
        test ah, 0x41
        jne public_45a258
        call public_59d570
        fstp dword ptr ss : [esp+0xC]
        call public_59d560
        test al, al
        je public_45a215
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+0xC]
        jmp public_45a219
        public_45a215 : nop
        fld dword ptr ss : [esp+0xC]
        public_45a219 : nop
        fld dword ptr ds : [public_5c75d8]
        mov byte ptr ss : [esp+0xF], 0xFF
        fmul st, st(1)
        call public_5b7ec0
        xor edx, edx
        mov dl, al
        mov byte ptr ss : [esp+0xC], al
        mov dword ptr ss : [esp], edx
        fild dword ptr ss : [esp]
        fmul st, st(1)
        call public_5b7ec0
        fstp st(0)
        mov byte ptr ss : [esp+0xD], al
        mov byte ptr ss : [esp+0xE], al
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 
        public_45a258 : nop
        mov eax, dword ptr ss : [esp+8]
        mov cl, 0x40
        mov byte ptr ds : [eax+1], cl
        mov byte ptr ds : [eax+2], cl
        mov byte ptr ds : [eax], 0xFF
        mov byte ptr ds : [eax+3], 0xFF
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45a1a0)
    }
}

#undef public_45a1c0
#undef public_45a1e6
#undef public_45a215
#undef public_45a219
#undef public_45a258
