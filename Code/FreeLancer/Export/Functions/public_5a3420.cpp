#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_561da0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2a40);
CLANG_FORWARD_PROC_SYMBOL(public_5a2ee0);

#define public_5a346a _public_5a346a
#define public_5a3482 _public_5a3482
#define public_5a34b9 _public_5a34b9
#define public_5a34c5 _public_5a34c5
#define public_5a34d1 _public_5a34d1
#define public_5a34d9 _public_5a34d9
#define public_5a34f8 _public_5a34f8
#define public_5a3507 _public_5a3507
#define public_5a3510 _public_5a3510
#define public_5a3514 _public_5a3514
#define public_5a3539 _public_5a3539
#define public_5a354d _public_5a354d
#define public_5a36ce _public_5a36ce
#define public_5a3765 _public_5a3765
#define public_5a37f1 _public_5a37f1
#define public_5a3899 _public_5a3899
#define public_5a3911 _public_5a3911
#define public_5a3913 _public_5a3913
#define public_5a3944 _public_5a3944

PROC_DECLARE(0x5a3420, internal_5a3420, public_5a3420);
extern "C" NAKED register_t __cdecl internal_5a3420()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push esi
        push 6
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5a3944
        push 9
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5a3944
        mov al, byte ptr ds : [esi+0x6C]
        test al, 2
        je public_5a3944
        mov cl, byte ptr ds : [esi+0x35C]
        mov bl, 0x80
        test bl, cl
        jne public_5a346a
        test al, 1
        je public_5a3944
        public_5a346a : nop
        mov al, byte ptr ds : [esi+0x35E]
        test al, al
        je public_5a3482
        mov al, byte ptr ds : [esi+0x35F]
        test al, al
        jne public_5a3944
        public_5a3482 : nop
        mov ecx, esi
        call public_59e5c0
        mov al, byte ptr ds : [esi+0x35C]
        mov dl, byte ptr ds : [esi+0x6C]
        mov cl, al
        shr cl, 4
        and cl, 1
        test dl, 1
        mov byte ptr ss : [esp+0xB], cl
        jne public_5a34b9
        and al, 0xEB
        mov byte ptr ds : [esi+0x35C], al
        mov byte ptr ss : [esp+0xC], bl
        mov byte ptr ss : [esp+0xD], bl
        mov byte ptr ss : [esp+0xE], bl
        jmp public_5a3507
        public_5a34b9 : nop
        test cl, cl
        jne public_5a34f8
        test al, 0x20
        je public_5a34c5
        test al, 4
        jne public_5a34f8
        public_5a34c5 : nop
        test al, 2
        jne public_5a34d9
        test al, 1
        je public_5a34d1
        test al, 0x40
        jne public_5a34d9
        public_5a34d1 : nop
        mov ebx, dword ptr ds : [public_679bb0]
        jmp public_5a3510
        public_5a34d9 : nop
        lea eax, ss:[esp+0xC]
        push eax
        call public_561da0
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x14], ebx
        call public_561da0
        add esp, 8
        jmp public_5a3514
        public_5a34f8 : nop
        mov byte ptr ss : [esp+0xC], 0xFF
        mov byte ptr ss : [esp+0xD], 0xFF
        mov byte ptr ss : [esp+0xE], 0
        public_5a3507 : nop
        mov byte ptr ss : [esp+0xF], 0xFF
        mov ebx, dword ptr ss : [esp+0xC]
        public_5a3510 : nop
        mov dword ptr ss : [esp+0xC], ebx
        public_5a3514 : nop
        test byte ptr ds : [esi+0x35C], 8
        je public_5a3539
        mov byte ptr ss : [esp+0xC], 0xFF
        mov byte ptr ss : [esp+0xD], 0xFF
        mov byte ptr ss : [esp+0xE], 0xFF
        mov byte ptr ss : [esp+0xF], 0xFF
        mov ebx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], ebx
        public_5a3539 : nop
        mov al, byte ptr ds : [esi+0x37C]
        test al, al
        je public_5a354d
        mov ebx, dword ptr ds : [esi+0x378]
        mov dword ptr ss : [esp+0xC], ebx
        public_5a354d : nop
        fld dword ptr ds : [esi+0x68]
        push ebp
        fadd dword ptr ds : [esi+0xB0]
        push edi
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x64]
        fadd dword ptr ds : [esi+0xAC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x60]
        fadd dword ptr ds : [esi+0xA8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        lea edx, ds:[esi+0x350]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [esi+0xBC]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x34]
        fld dword ptr ds : [esi+0xB8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xB4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        fchs 
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], ecx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x3C], eax
        fadd dword ptr ds : [esi+0xB0]
        xor eax, eax
        mov dword ptr ss : [esp+0x38], edx
        mov dx, word ptr ss : [esp+0x16]
        mov al, bl
        xor ecx, ecx
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        mov cl, bh
        fld dword ptr ds : [esi+0x64]
        movzx edi, dh
        fadd dword ptr ds : [esi+0xAC]
        shl edi, 8
        or edi, eax
        shl eax, 8
        fstp dword ptr ss : [esp+4]
        or eax, ecx
        fld dword ptr ds : [esi+0x60]
        movzx ebp, dl
        fadd dword ptr ds : [esi+0xA8]
        shl edi, 8
        or edi, ecx
        fstp dword ptr ss : [esp]
        shl eax, 8
        or eax, ebp
        shl edi, 8
        lea ecx, ss:[esp+0x28]
        or edi, ebp
        mov ebx, eax
        call public_422b80
        test byte ptr ds : [esi+0x384], 4
        je public_5a36ce
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x30]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x3B449BA6
        push ebx
        push edi
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, offset public_67dd90
        call public_5a2a40
        public_5a36ce : nop
        fld dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi+0x384]
        test al, 2
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        je public_5a3765
        fld dword ptr ss : [esp+0x30]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x3B449BA6
        push ebx
        push edi
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, offset public_67dd90
        call public_5a2a40
        public_5a3765 : nop
        fld dword ptr ss : [esp+0x34]
        mov al, byte ptr ds : [esi+0x384]
        test al, 1
        fchs 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        je public_5a37f1
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        push 0x3B449BA6
        fadd dword ptr ss : [esp+0x2C]
        push ebx
        push edi
        lea edx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x2C]
        push edx
        fadd dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x50]
        push eax
        mov ecx, offset public_67dd90
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x5C]
        call public_5a2a40
        public_5a37f1 : nop
        fld dword ptr ds : [esi+0xB4]
        fchs 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ss : [esp+0x40]
        fchs 
        mov dword ptr ss : [esp+0x28], ecx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+0xBC]
        mov edx, dword ptr ss : [esp+0x44]
        fchs 
        mov dword ptr ss : [esp+0x2C], edx
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x30], eax
        test byte ptr ds : [esi+0x384], 8
        je public_5a3899
        fld dword ptr ss : [esp+0x40]
        push 0x3B449BA6
        fadd dword ptr ss : [esp+0x20]
        push ebx
        push edi
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x50]
        push ecx
        fadd dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, offset public_67dd90
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x5C]
        call public_5a2a40
        public_5a3899 : nop
        mov cl, byte ptr ds : [esi+0x35C]
        mov al, byte ptr ss : [esp+0x13]
        shl al, 4
        xor al, cl
        and al, 0x10
        xor al, cl
        mov byte ptr ds : [esi+0x35C], al
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x9C]
        test byte ptr ds : [esi+0x35D], 1
        pop edi
        pop ebp
        je public_5a3944
        mov ecx, offset public_67dd90
        call public_5a2ee0
        mov ecx, offset public_67dd68
        call public_5a2ee0
        mov al, byte ptr ds : [public_67ddb4]
        test al, al
        je public_5a3911
        mov ecx, dword ptr ds : [public_67dd9c]
        mov edx, dword ptr ds : [public_67dda0]
        xor eax, eax
        mov byte ptr ds : [public_67ddb4], 0
        mov dword ptr ds : [public_67ddac], eax
        mov dword ptr ds : [public_67ddb0], eax
        mov dword ptr ds : [public_67dda4], ecx
        mov dword ptr ds : [public_67dda8], edx
        jmp public_5a3913
        public_5a3911 : nop
        xor eax, eax
        public_5a3913 : nop
        mov cl, byte ptr ds : [public_67dd8c]
        test cl, cl
        je public_5a3944
        mov ecx, dword ptr ds : [public_67dd78]
        mov dword ptr ds : [public_67dd84], eax
        mov dword ptr ds : [public_67dd88], eax
        mov eax, dword ptr ds : [public_67dd74]
        mov byte ptr ds : [public_67dd8c], 0
        mov dword ptr ds : [public_67dd7c], eax
        mov dword ptr ds : [public_67dd80], ecx
        public_5a3944 : nop
        pop esi
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x5a3420)
    }
}

#undef public_5a346a
#undef public_5a3482
#undef public_5a34b9
#undef public_5a34c5
#undef public_5a34d1
#undef public_5a34d9
#undef public_5a34f8
#undef public_5a3507
#undef public_5a3510
#undef public_5a3514
#undef public_5a3539
#undef public_5a354d
#undef public_5a36ce
#undef public_5a3765
#undef public_5a37f1
#undef public_5a3899
#undef public_5a3911
#undef public_5a3913
#undef public_5a3944
