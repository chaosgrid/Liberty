#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_46eab0);
CLANG_FORWARD_PROC_SYMBOL(public_46ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4fb1e0);
CLANG_FORWARD_PROC_SYMBOL(public_4fc950);
CLANG_FORWARD_PROC_SYMBOL(public_4fc9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4fca50);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4fb20b _public_4fb20b
#define public_4fb21b _public_4fb21b
#define public_4fb24d _public_4fb24d
#define public_4fb266 _public_4fb266
#define public_4fb27b _public_4fb27b
#define public_4fb4e0 _public_4fb4e0
#define public_4fb507 _public_4fb507
#define public_4fb545 _public_4fb545
#define public_4fb5af _public_4fb5af
#define public_4fb5f0 _public_4fb5f0
#define public_4fb660 _public_4fb660
#define public_4fb68f _public_4fb68f
#define public_4fb69f _public_4fb69f
#define public_4fb6c5 _public_4fb6c5
#define public_4fb6d5 _public_4fb6d5
#define public_4fb7bb _public_4fb7bb
#define public_4fb7c1 _public_4fb7c1
#define public_4fb9a6 _public_4fb9a6
#define public_4fb9ac _public_4fb9ac
#define public_4fbb3d _public_4fbb3d
#define public_4fbb43 _public_4fbb43
#define public_4fbcd1 _public_4fbcd1
#define public_4fbcd7 _public_4fbcd7
#define public_4fbe61 _public_4fbe61
#define public_4fbe67 _public_4fbe67
#define public_4fc026 _public_4fc026
#define public_4fc02c _public_4fc02c
#define public_4fc20c _public_4fc20c
#define public_4fc212 _public_4fc212
#define public_4fc3f2 _public_4fc3f2
#define public_4fc3f8 _public_4fc3f8

PROC_DECLARE(0x4fb1e0, internal_4fb1e0, public_4fb1e0);
extern "C" NAKED register_t __cdecl internal_4fb1e0()
{
    __asm
    {
        sub esp, 0x16C
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x6C]
        fld dword ptr ds : [ecx+0x6C]
        push ebp
        fld dword ptr ss : [esp+0x17C]
        push esi
        fcomp dword ptr ds : [public_5c7474]
        push edi
        fnstsw ax
        test ah, 0x44
        jp public_4fb20b
        fstp st(0)
        fld dword ptr ds : [ecx+0x78]
        public_4fb20b : nop
        fld dword ptr ds : [ecx+0x74]
        fcom 
        fnstsw ax
        test ah, 5
        jp public_4fb21b
        fstp st(0)
        fld st(0)
        public_4fb21b : nop
        fld dword ptr ds : [ecx+0x60]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ecx+0x64]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx+0x68]
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fb24d
        mov dword ptr ss : [esp+0x20], 0
        public_4fb24d : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fb266
        mov dword ptr ss : [esp+0x28], 0
        public_4fb266 : nop
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fb27b
        mov dword ptr ss : [esp+0x14], 0
        public_4fb27b : nop
        mov esi, dword ptr ss : [esp+0x180]
        fld st(1)
        fstp dword ptr ss : [esp+0x60]
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        fld st(1)
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x48], ecx
        fstp dword ptr ss : [esp+0x7C]
        lea ecx, ss:[esp+0x60]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], edx
        fmul dword ptr ss : [esp+0x184]
        push ecx
        lea edx, ss:[esp+0x138]
        push edx
        fstp dword ptr ss : [esp+0x64]
        mov ecx, esi
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x6C], 0
        fmul dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x4C], 0
        fadd st, st(1)
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0
        fchs 
        fstp dword ptr ss : [esp+0x15C]
        mov dword ptr ss : [esp+0x88], 0
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x5C], 0
        fmul dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x154], 0
        mov dword ptr ss : [esp+0x158], 0
        fadd st, st(1)
        mov dword ptr ss : [esp+0x130], 0
        mov dword ptr ss : [esp+0x134], 0
        mov dword ptr ss : [esp+0x58], eax
        fstp dword ptr ss : [esp+0x138]
        fstp st(0)
        call public_4e7090
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x64]
        call public_411350
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x108]
        push edx
        mov ecx, esi
        call public_4e7090
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x15C]
        push ecx
        mov ecx, esi
        call public_4e7090
        fld dword ptr ss : [esp+0x44]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0xC0]
        push eax
        mov ecx, esi
        call public_4e7090
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x144]
        push edx
        mov ecx, esi
        call public_4e7090
        fld dword ptr ss : [esp+0x74]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x7C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x78]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0xD8]
        push ecx
        mov ecx, esi
        call public_4e7090
        lea edx, ss:[esp+0x78]
        push edx
        lea eax, ss:[esp+0x120]
        push eax
        mov ecx, esi
        call public_4e7090
        fld dword ptr ss : [esp+0x80]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x88]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x84]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        mov ecx, esi
        call public_4e7090
        lea eax, ss:[esp+0x14C]
        push eax
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, esi
        call public_4e7090
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x12C]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_423b30
        mov eax, dword ptr ds : [public_674f50]
        add esp, 0xC
        test eax, eax
        jne public_4fb4e0
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fb4e0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        lea ecx, ss:[esp+0xE8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4fb507
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fb507 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x54]
        push ecx
        push esi
        lea ecx, ss:[esp+0xD0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_423b30
        mov eax, dword ptr ds : [public_674f50]
        add esp, 0xC
        test eax, eax
        jne public_4fb545
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fb545 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        lea ecx, ss:[esp+0x100]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x68]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x70]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0xAC]
        push ecx
        call public_423b30
        mov eax, dword ptr ds : [public_674f50]
        add esp, 0xC
        test eax, eax
        jne public_4fb5af
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fb5af : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xA4]
        push ecx
        push esi
        lea ecx, ss:[esp+0x118]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_423b30
        mov eax, dword ptr ds : [public_674f50]
        add esp, 0xC
        test eax, eax
        jne public_4fb5f0
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fb5f0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        lea ecx, ss:[esp+0xAC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x44]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x170]
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x168]
        push eax
        lea ecx, ss:[esp+0x178]
        push ecx
        call public_423b30
        mov eax, dword ptr ds : [public_674f50]
        add esp, 0xC
        test eax, eax
        jne public_4fb660
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4fb660 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x170]
        push ecx
        push esi
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [ebx+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        dec ecx
        je public_4fb68f
        mov dword ptr ss : [esp+0x24], 0x3F000000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_4fb69f
        public_4fb68f : nop
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x14], 0x3F000000
        public_4fb69f : nop
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        dec ecx
        fadd dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5c75e8]
        je public_4fb6c5
        mov dword ptr ss : [esp+0x20], 0x3F0CCCCD
        mov dword ptr ss : [esp+0x28], 0x3F800000
        jmp public_4fb6d5
        public_4fb6c5 : nop
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x28], 0x3EE66666
        public_4fb6d5 : nop
        fld dword ptr ss : [esp+0x188]
        fmul dword ptr ds : [eax+0x58]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x188]
        fmul dword ptr ds : [eax+0x5C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0x28]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fstp dword ptr ds : [public_674cb4]
        mov byte ptr ds : [public_674cae], al
        mov al, byte ptr ds : [public_674ca5]
        test al, al
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3F400000
        je public_4fb7c1
        mov edx, dword ptr ds : [public_674ca8]
        and edx, 3
        cmp dl, 3
        jne public_4fb7bb
        mov eax, dword ptr ds : [public_674c84]
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        public_4fb7bb : nop
        inc dword ptr ds : [public_674ca8]
        public_4fb7c1 : nop
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x48]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x4C]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x50]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov ecx, dword ptr ds : [public_674c84]
        inc ecx
        mov dword ptr ds : [public_674c84], ecx
        mov ecx, offset public_674c7c
        call public_46ecd0
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x48]
        mov esi, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x2C]
        lea edx, ds:[esi-1]
        fmul dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+0x90], edx
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0x40]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ss : [esp+0x140]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0x148]
        fstp dword ptr ds : [public_674cb4]
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3F000000
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov al, byte ptr ds : [public_674ca5]
        test al, al
        je public_4fb9ac
        mov eax, dword ptr ds : [public_674ca8]
        and eax, 3
        cmp al, 3
        jne public_4fb9a6
        add esi, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], esi
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        mov esi, dword ptr ds : [public_674c84]
        public_4fb9a6 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fb9ac : nop
        mov edx, dword ptr ds : [public_674c80]
        mov al, byte ptr ds : [public_674cac]
        lea ecx, ds:[esi+esi*2]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x2C]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x124]
        mov eax, dword ptr ds : [public_674c84]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x11C]
        lea edx, ds:[eax-1]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ds : [public_674ca5]
        test cl, cl
        mov dword ptr ss : [esp+0x98], edx
        mov edx, dword ptr ss : [esp+0x120]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ds : [public_674cb0], 0x3F800000
        mov dword ptr ss : [esp+0x18], edx
        je public_4fbb43
        mov edx, dword ptr ds : [public_674ca8]
        and edx, 3
        cmp dl, 3
        jne public_4fbb3d
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*8-0x18]
        lea esi, ds:[ecx+edx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        public_4fbb3d : nop
        inc dword ptr ds : [public_674ca8]
        public_4fbb43 : nop
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x24]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ds : [public_674c84]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0xD4]
        lea edx, ds:[eax-1]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ds : [public_674ca5]
        test cl, cl
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ss : [esp+0xD8]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ds : [public_674cb0], 0x3F800000
        mov dword ptr ss : [esp+0x18], edx
        je public_4fbcd7
        mov edx, dword ptr ds : [public_674ca8]
        and edx, 3
        cmp dl, 3
        jne public_4fbcd1
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*8-0x18]
        lea esi, ds:[ecx+edx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        public_4fbcd1 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fbcd7 : nop
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x24]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xB8]
        mov eax, dword ptr ds : [public_674c84]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [public_674ca5]
        test cl, cl
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0xB0]
        fstp dword ptr ds : [public_674cb4]
        lea ebp, ds:[eax-1]
        mov dword ptr ds : [public_674cb0], 0x3F000000
        mov dword ptr ss : [esp+0x1C], edx
        je public_4fbe67
        mov ecx, dword ptr ds : [public_674ca8]
        and ecx, 3
        cmp cl, 3
        jne public_4fbe61
        add eax, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], eax
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*8-0x18]
        lea esi, ds:[ecx+edx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        public_4fbe61 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fbe67 : nop
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cac]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov ecx, dword ptr ds : [public_674c84]
        inc ecx
        mov dword ptr ds : [public_674c84], ecx
        mov ecx, offset public_674c7c
        call public_46ecd0
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x30]
        mov esi, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x10]
        lea edx, ds:[esi-1]
        fmul dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [esp+0x84], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x28]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x28]
        mov byte ptr ds : [public_674cae], al
        mov al, byte ptr ds : [public_674ca5]
        test al, al
        fstp dword ptr ds : [public_674cb4]
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0
        je public_4fc02c
        mov eax, dword ptr ds : [public_674ca8]
        and eax, 3
        cmp al, 3
        jne public_4fc026
        add esi, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], esi
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        mov esi, dword ptr ds : [public_674c84]
        public_4fc026 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fc02c : nop
        mov edx, dword ptr ds : [public_674c80]
        mov al, byte ptr ds : [public_674cac]
        lea ecx, ds:[esi+esi*2]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x48]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x4C]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x50]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov ecx, dword ptr ds : [public_674c84]
        inc ecx
        mov dword ptr ds : [public_674c84], ecx
        mov ecx, offset public_674c7c
        call public_46ecd0
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x18]
        mov esi, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x10]
        lea edx, ds:[esi-1]
        fmul dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x8C], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x10]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ss : [esp+0xEC]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0xF4]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ds : [public_674ca5]
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3E800000
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        test al, al
        je public_4fc212
        mov eax, dword ptr ds : [public_674ca8]
        and eax, 3
        cmp al, 3
        jne public_4fc20c
        add esi, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], esi
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        mov esi, dword ptr ds : [public_674c84]
        public_4fc20c : nop
        inc dword ptr ds : [public_674ca8]
        public_4fc212 : nop
        mov edx, dword ptr ds : [public_674c80]
        mov al, byte ptr ds : [public_674cac]
        lea ecx, ds:[esi+esi*2]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov ecx, dword ptr ds : [public_674c84]
        inc ecx
        mov dword ptr ds : [public_674c84], ecx
        mov ecx, offset public_674c7c
        call public_46ecd0
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x48]
        mov esi, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x10]
        lea edx, ds:[esi-1]
        fmul dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+0x88], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x40]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x138]
        mov edx, dword ptr ss : [esp+0x134]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0x13C]
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ds : [public_674ca5]
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3E800000
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        test al, al
        je public_4fc3f8
        mov eax, dword ptr ds : [public_674ca8]
        and eax, 3
        cmp al, 3
        jne public_4fc3f2
        add esi, 2
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], esi
        call public_46ecd0
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        mov esi, dword ptr ds : [public_674c84]
        public_4fc3f2 : nop
        inc dword ptr ds : [public_674ca8]
        public_4fc3f8 : nop
        mov edx, dword ptr ds : [public_674c80]
        mov al, byte ptr ds : [public_674cac]
        lea ecx, ds:[esi+esi*2]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cad]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674cae]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_674caf]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        fld dword ptr ds : [public_674cb0]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+0x10]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ds : [public_674cb4]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+0x14]
        mov eax, dword ptr ds : [public_674c84]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [public_674c80]
        fstp dword ptr ds : [eax+edx*8]
        mov eax, dword ptr ds : [public_674c84]
        mov edx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8+4]
        mov eax, dword ptr ds : [public_674c84]
        mov ecx, dword ptr ds : [public_674c80]
        fld dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+8]
        mov edx, dword ptr ds : [public_674c84]
        inc edx
        mov ecx, offset public_674c7c
        mov dword ptr ds : [public_674c84], edx
        call public_46ecd0
        mov edx, dword ptr ds : [public_674c84]
        mov eax, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x108]
        dec edx
        push eax
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [esp+0x108]
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0x15C]
        mov edx, dword ptr ss : [esp+0x158]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x160]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0xC4]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x3C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x38]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x34]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xCC]
        mov edx, dword ptr ss : [esp+0xC8]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0xD0]
        push eax
        push ecx
        fstp dword ptr ds : [public_674cb4]
        push edx
        mov ecx, offset public_674c7c
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0
        call public_46eab0
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x24]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cac], al
        call public_5b7ec0
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [public_674cad], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0xE4]
        mov edx, dword ptr ss : [esp+0xE0]
        mov byte ptr ds : [public_674cae], al
        mov eax, dword ptr ss : [esp+0xE8]
        push eax
        push ecx
        fstp dword ptr ds : [public_674cb4]
        push edx
        mov ecx, offset public_674c7c
        mov byte ptr ds : [public_674caf], 0xFF
        mov dword ptr ds : [public_674cb0], 0x3E800000
        call public_46eab0
        fld dword ptr ss : [esp+0x10]
        sub esp, 0xC
        mov ecx, offset public_674c7c
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ds : [ebx+0x6C]
        fmul dword ptr ds : [eax+0x54]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+0x50]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+0x4C]
        fstp dword ptr ss : [esp]
        call public_4fc950
        mov eax, dword ptr ss : [esp+0x100]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xFC]
        push eax
        fstp dword ptr ds : [public_674cb4]
        mov dword ptr ds : [public_674cb0], 0x3E800000
        push ecx
        mov edx, dword ptr ss : [esp+0x100]
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0x114]
        mov edx, dword ptr ss : [esp+0x110]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x118]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0xAC]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x9C], eax
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        push edx
        mov ecx, offset public_674c7c
        call public_46eab0
        movzx edi, word ptr ss : [esp+0x2C]
        movzx ebx, word ptr ss : [esp+0x98]
        movzx esi, word ptr ss : [esp+0x90]
        push edi
        push ebx
        push esi
        mov ecx, offset public_674c7c
        mov dword ptr ss : [esp+0x34], eax
        call public_4fc9a0
        movzx ebp, bp
        push edi
        push ebp
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx edi, word ptr ss : [esp+0x84]
        push edi
        push ebp
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        push edi
        push ebx
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx ebx, word ptr ss : [esp+0x1C]
        movzx edi, word ptr ss : [esp+0x88]
        movzx esi, word ptr ss : [esp+0x8C]
        push ebx
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx ebp, word ptr ss : [esp+0x18]
        push ebp
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx eax, word ptr ss : [esp+0x14]
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx eax, word ptr ss : [esp+0x24]
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx eax, word ptr ss : [esp+0x20]
        movzx edi, word ptr ss : [esp+0xA0]
        push ebx
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fca50
        movzx ebx, word ptr ss : [esp+0x10]
        push ebp
        push ebx
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fca50
        movzx eax, word ptr ss : [esp+0x14]
        movzx ebp, word ptr ss : [esp+0x9C]
        push eax
        push ebp
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fca50
        movzx ecx, word ptr ss : [esp+0x24]
        movzx eax, word ptr ss : [esp+0x28]
        push ecx
        push eax
        push edi
        push esi
        mov ecx, offset public_674c7c
        call public_4fca50
        movzx eax, word ptr ss : [esp+0x20]
        movzx esi, word ptr ss : [esp+0x94]
        push eax
        push esi
        push edi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        push ebx
        push esi
        push edi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        push ebp
        push esi
        push edi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        movzx eax, word ptr ss : [esp+0x28]
        push eax
        push esi
        push edi
        mov ecx, offset public_674c7c
        call public_4fc9a0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x16C
        ret 0xC
        UNREACHABLE_TRAP(0x4fb1e0)
    }
}

#undef public_4fb20b
#undef public_4fb21b
#undef public_4fb24d
#undef public_4fb266
#undef public_4fb27b
#undef public_4fb4e0
#undef public_4fb507
#undef public_4fb545
#undef public_4fb5af
#undef public_4fb5f0
#undef public_4fb660
#undef public_4fb68f
#undef public_4fb69f
#undef public_4fb6c5
#undef public_4fb6d5
#undef public_4fb7bb
#undef public_4fb7c1
#undef public_4fb9a6
#undef public_4fb9ac
#undef public_4fbb3d
#undef public_4fbb43
#undef public_4fbcd1
#undef public_4fbcd7
#undef public_4fbe61
#undef public_4fbe67
#undef public_4fc026
#undef public_4fc02c
#undef public_4fc20c
#undef public_4fc212
#undef public_4fc3f2
#undef public_4fc3f8
