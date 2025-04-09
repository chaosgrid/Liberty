#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421b70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_55f111 _public_55f111
#define public_55f1ea _public_55f1ea
#define public_55f1ec _public_55f1ec
#define public_55f27b _public_55f27b
#define public_55f283 _public_55f283
#define public_55f357 _public_55f357
#define public_55f430 _public_55f430
#define public_55f432 _public_55f432
#define public_55f4bc _public_55f4bc
#define public_55f4d6 _public_55f4d6
#define public_55f582 _public_55f582
#define public_55f58c _public_55f58c

PROC_DECLARE(0x55ef60, internal_55ef60, public_55ef60);
extern "C" NAKED register_t __cdecl internal_55ef60()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x34D]
        test al, al
        je public_55f58c
        push ebp
        push esi
        push edi
        call public_5a0760
        fld dword ptr ds : [ebx+0x60]
        fadd dword ptr ds : [ebx+0xA8]
        lea esi, ds:[ebx+0x3C]
        mov ecx, 9
        lea edi, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [ebx+0xAC]
        rep movsd
        mov dword ptr ss : [esp+0x64], eax
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [ebx+0x68]
        lea eax, ss:[esp+0x40]
        fadd dword ptr ds : [ebx+0xB0]
        push eax
        push 0
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xB71
        call public_421ed0
        fld dword ptr ds : [ebx+0x330]
        fcomp dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ds : [public_679bb4]
        mov esi, dword ptr ds : [ebx+0x344]
        add esp, 0x10
        mov dword ptr ss : [esp+0x34], ecx
        fnstsw ax
        mov dword ptr ss : [esp+0x2C], esi
        test ah, 0x44
        jnp public_55f4d6
        fld dword ptr ds : [ebx+0xB4]
        mov cl, byte ptr ds : [ebx+0x348]
        test cl, cl
        fadd st(0), st
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0xB8]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x10]
        je public_55f283
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_55f27b
        fld dword ptr ds : [ebx+0x33C]
        mov dword ptr ss : [esp+0x1C], 0
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_55f111
        fld dword ptr ds : [ebx+0x33C]
        mov edx, dword ptr ss : [esp+0x2E]
        fdiv dword ptr ds : [ebx+0x330]
        mov eax, dword ptr ss : [esp+0x2D]
        push 0xFF
        push edx
        push eax
        push esi
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx+0xB8]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0xB4]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        call public_421b70
        push 8
        call public_421670
        mov edi, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x2C]
        push 0
        push edi
        push ebp
        call public_421cc0
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x3C]
        push 0
        push edi
        fstp dword ptr ss : [esp+0x50]
        mov edi, dword ptr ss : [esp+0x50]
        push edi
        call public_421cc0
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x3C]
        push 0
        fstp dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        push edi
        call public_421cc0
        mov edx, dword ptr ss : [esp+0x58]
        push 0
        push edx
        push ebp
        call public_421cc0
        add esp, 0x44
        call public_421690
        public_55f111 : nop
        fld dword ptr ds : [public_5c75dc]
        mov dword ptr ss : [esp+0x18], 0
        fdiv dword ptr ds : [ebx+0x330]
        fld st(0)
        fmul dword ptr ds : [ebx+0x334]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x338]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_55f1ea
        fmul dword ptr ds : [ebx+0x338]
        mov eax, dword ptr ss : [esp+0x2E]
        mov ecx, dword ptr ss : [esp+0x2D]
        push 0xFF
        fmul dword ptr ss : [esp+0x18]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x24]
        push esi
        fld dword ptr ds : [ebx+0xB8]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [ebx+0xB4]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x30]
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x34]
        push 0
        push esi
        push edi
        call public_421cc0
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x38]
        push 0
        push esi
        fstp dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x50]
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x3C]
        push 0
        fstp dword ptr ss : [esp+0x58]
        mov ebp, dword ptr ss : [esp+0x58]
        push ebp
        push esi
        call public_421cc0
        push 0
        push ebp
        push edi
        call public_421cc0
        add esp, 0x44
        call public_421690
        jmp public_55f1ec
        public_55f1ea : nop
        fstp st(0)
        public_55f1ec : nop
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx+0x340]
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        mov edx, dword ptr ss : [esp+0x2F]
        mov ecx, dword ptr ss : [esp+0x2E]
        fsub dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x31]
        push ecx
        fstp dword ptr ss : [esp+0x30]
        push edx
        fld dword ptr ds : [ebx+0xB8]
        push eax
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ebx+0xB4]
        fstp dword ptr ss : [esp+0x34]
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x38]
        push 0
        push esi
        push edi
        call public_421cc0
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x48]
        push 0
        push esi
        fstp dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x50]
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x54]
        jmp public_55f4bc
        public_55f27b : nop
        test cl, cl
        jne public_55f4d6
        public_55f283 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_55f4d6
        fld dword ptr ds : [ebx+0x33C]
        mov dword ptr ss : [esp+0x18], 0
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_55f357
        fld dword ptr ds : [ebx+0x33C]
        mov eax, dword ptr ss : [esp+0x2E]
        fdiv dword ptr ds : [ebx+0x330]
        mov ecx, dword ptr ss : [esp+0x2D]
        push 0xFF
        push eax
        push ecx
        push esi
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+0xB8]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0xB4]
        fchs 
        fstp dword ptr ss : [esp+0x34]
        call public_421b70
        push 8
        call public_421670
        mov edi, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x38]
        push 0
        push edi
        push ebp
        call public_421cc0
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x34]
        push 0
        push edi
        fstp dword ptr ss : [esp+0x50]
        mov edi, dword ptr ss : [esp+0x50]
        push edi
        call public_421cc0
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x44]
        push 0
        fstp dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        push edi
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x5C]
        push 0
        push eax
        push ebp
        call public_421cc0
        add esp, 0x44
        call public_421690
        public_55f357 : nop
        fld dword ptr ds : [public_5c75dc]
        mov dword ptr ss : [esp+0x1C], 0
        fdiv dword ptr ds : [ebx+0x330]
        fld st(0)
        fmul dword ptr ds : [ebx+0x334]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+0x338]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_55f430
        fmul dword ptr ds : [ebx+0x338]
        mov ecx, dword ptr ss : [esp+0x2E]
        mov edx, dword ptr ss : [esp+0x2D]
        push 0xFF
        fmul dword ptr ss : [esp+0x14]
        push ecx
        push edx
        fstp dword ptr ss : [esp+0x28]
        push esi
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [ebx+0xB8]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0xB4]
        fchs 
        fstp dword ptr ss : [esp+0x34]
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x38]
        push 0
        push esi
        push edi
        call public_421cc0
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x34]
        push 0
        push esi
        fstp dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ss : [esp+0x4C]
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x48]
        push 0
        fstp dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x54]
        push ebp
        push esi
        call public_421cc0
        push 0
        push ebp
        push edi
        call public_421cc0
        add esp, 0x44
        call public_421690
        jmp public_55f432
        public_55f430 : nop
        fstp st(0)
        public_55f432 : nop
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx+0x340]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], eax
        mov ecx, dword ptr ss : [esp+0x2F]
        mov edx, dword ptr ss : [esp+0x2E]
        fsub dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x31]
        push edx
        fstp dword ptr ss : [esp+0x28]
        push ecx
        fld dword ptr ss : [esp+0x24]
        push eax
        fsub dword ptr ds : [ebx+0xB8]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ebx+0xB4]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ss : [esp+0x3C]
        push 0
        push esi
        push edi
        call public_421cc0
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x34]
        push 0
        push esi
        fstp dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x50]
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x54]
        public_55f4bc : nop
        push 0
        push ebp
        push esi
        call public_421cc0
        push 0
        push ebp
        push edi
        call public_421cc0
        add esp, 0x44
        call public_421690
        public_55f4d6 : nop
        mov al, byte ptr ds : [ebx+0x34C]
        test al, al
        pop edi
        pop esi
        pop ebp
        je public_55f582
        mov edx, dword ptr ss : [esp+0x2B]
        mov eax, dword ptr ss : [esp+0x2A]
        mov ecx, dword ptr ss : [esp+0x29]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        call public_421b70
        push 7
        call public_421670
        fld dword ptr ds : [ebx+0xB8]
        add esp, 0x14
        fchs 
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0xB4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [ebx+0xB8]
        mov eax, dword ptr ds : [ebx+0xB4]
        add esp, 0xC
        fchs 
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_421cc0
        mov ecx, dword ptr ds : [ebx+0xB8]
        mov edx, dword ptr ds : [ebx+0xB4]
        push 0
        push ecx
        push edx
        call public_421cc0
        fld dword ptr ds : [ebx+0xB4]
        mov eax, dword ptr ds : [ebx+0xB8]
        fchs 
        add esp, 0x18
        push 0
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        call public_421690
        public_55f582 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x9C]
        public_55f58c : nop
        pop ebx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x55ef60)
    }
}

#undef public_55f111
#undef public_55f1ea
#undef public_55f1ec
#undef public_55f27b
#undef public_55f283
#undef public_55f357
#undef public_55f430
#undef public_55f432
#undef public_55f4bc
#undef public_55f4d6
#undef public_55f582
#undef public_55f58c
