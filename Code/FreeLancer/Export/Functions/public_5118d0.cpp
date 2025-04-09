#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_50cd50);

#define public_511b2e _public_511b2e
#define public_511b63 _public_511b63

PROC_DECLARE(0x5118d0, internal_5118d0, public_5118d0);
extern "C" NAKED register_t __cdecl internal_5118d0()
{
    __asm
    {
        mov al, byte ptr ds : [public_613470]
        sub esp, 0x38
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        je public_511b63
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0
        call public_422190
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        push esi
        call dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x24]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_610534]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        mov ecx, esi
        call public_40fb60
        push esi
        call public_422950
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        call dword ptr ds : [edx]
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x40]
        push esi
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x50]
        fmul st, st(3)
        push eax
        fxch 
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x34]
        mov ecx, esp
        sub esp, 0xC
        fsubp 
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(2)
        fsubp 
        fstp st(1)
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        fxch 
        mov dword ptr ds : [ecx+4], eax
        fmul st, st(1)
        mov eax, esp
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+8], edx
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x44]
        fsubp 
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax], ecx
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x34]
        fsubp 
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], edx
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x40]
        fsubp 
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x70]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        call public_50cd50
        mov edi, dword ptr ds : [edi+0xC]
        test edi, edi
        je public_511b2e
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x1C]
        sub esp, 0x10
        mov edx, esp
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x60]
        push eax
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        call public_50cd50
        public_511b2e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, esi
        call public_40fb60
        push esi
        call public_422950
        push 1
        call public_422190
        push 0xB71
        call public_421dd0
        push 0xB44
        call public_421dd0
        add esp, 0x10
        public_511b63 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x5118d0)
    }
}

#undef public_511b2e
#undef public_511b63
