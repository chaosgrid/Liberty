#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dba00);

#define public_62dba52 _public_62dba52
#define public_62dba59 _public_62dba59
#define public_62dba95 _public_62dba95
#define public_62dba9b _public_62dba9b
#define public_62dbadb _public_62dbadb
#define public_62dbb32 _public_62dbb32
#define public_62dbb67 _public_62dbb67
#define public_62dbb84 _public_62dbb84

PROC_DECLARE(0x62dba00, internal_62dba00, public_62dba00);
extern "C" NAKED register_t __cdecl internal_62dba00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        fld dword ptr ds : [esi]
        push edi
        fabs 
        mov edi, ecx
        fsub dword ptr ds : [edi+0x30]
        mov byte ptr ss : [esp+0x13], 0
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62dba52
        fld dword ptr ds : [esi]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x30]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        mov ebx, dword ptr ss : [ebp+0xC]
        fstp dword ptr ds : [ebx]
        add esp, 0x10
        mov byte ptr ss : [esp+0x13], 1
        jmp public_62dba59
        public_62dba52 : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx], eax
        public_62dba59 : nop
        fld dword ptr ds : [esi+4]
        fabs 
        fsub dword ptr ds : [edi+0x34]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62dba95
        fld dword ptr ds : [esi+4]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x34]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        fstp dword ptr ds : [ebx+4]
        add esp, 0x10
        mov byte ptr ss : [esp+0x13], 1
        jmp public_62dba9b
        public_62dba95 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ecx
        public_62dba9b : nop
        fld dword ptr ds : [esi+8]
        fabs 
        fsub dword ptr ds : [edi+0x38]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62dbadb
        fld dword ptr ds : [esi+8]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x38]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        fstp dword ptr ds : [ebx+8]
        mov al, 1
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_62dbadb : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        jne public_62dbb84
        fld dword ptr ss : [esp+0x14]
        sub esp, 0x10
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        jne public_62dbb32
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 1
        jne public_62dbb67
        fld dword ptr ds : [esi]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x30]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        mov al, byte ptr ss : [esp+0x23]
        fstp dword ptr ds : [ebx]
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_62dbb32 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 1
        jne public_62dbb67
        fld dword ptr ds : [esi+4]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x34]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        mov al, byte ptr ss : [esp+0x23]
        fstp dword ptr ds : [ebx+4]
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_62dbb67 : nop
        fld dword ptr ds : [esi+8]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x38]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        mov al, byte ptr ss : [esp+0x23]
        fstp dword ptr ds : [ebx+8]
        add esp, 0x10
        public_62dbb84 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x62dba00)
    }
}

#undef public_62dba52
#undef public_62dba59
#undef public_62dba95
#undef public_62dba9b
#undef public_62dbadb
#undef public_62dbb32
#undef public_62dbb67
#undef public_62dbb84
