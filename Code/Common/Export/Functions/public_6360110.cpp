#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);

#define public_6360274 _public_6360274

PROC_DECLARE(0x6360110, internal_6360110, public_6360110);
extern "C" NAKED register_t __cdecl internal_6360110()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        push ebx
        push esi
        mov esi, ecx
        fild dword ptr ds : [esi+0x14]
        push edi
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6360274
        mov ebx, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x2C], ebx
        add ebx, edi
        add ebx, edx
        add ebx, ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x14], eax
        add ebx, eax
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x10], ebx
        fild dword ptr ss : [esp+0x10]
        add ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        sub esp, 8
        mov dword ptr ss : [esp+0x2C], edx
        fld st(0)
        sub esp, 8
        fadd st, st(2)
        mov dword ptr ss : [esp+0x38], edi
        fld dword ptr ds : [public_63a5604]
        sub esp, 8
        fdiv dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], eax
        sub esp, 8
        sub esp, 8
        sub esp, 8
        sub esp, 8
        sub esp, 8
        sub esp, 8
        sub esp, 8
        fst dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x68]
        fstp st(0)
        fild dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x50]
        fild dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x48]
        fild dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x40]
        fild dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x38]
        fild dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x30]
        fild dword ptr ss : [esp+0x80]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x28]
        fild dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x64]
        fstp qword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp qword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp qword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x68]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_63a5710]
        fmul qword ptr ds : [public_63a5708]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63ee5b4 @0x6360249*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee5b4
        call public_6356960
        add esp, 0x5C
        mov ecx, 0x29
        xor eax, eax
        lea edi, ds:[esi+4]
        rep stosd
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], ecx
        public_6360274 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6360110)
    }
}

#undef public_6360274
