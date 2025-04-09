#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47ba90);
CLANG_FORWARD_PROC_SYMBOL(public_47c740);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47f040);
CLANG_FORWARD_PROC_SYMBOL(public_47f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_482a90);
CLANG_FORWARD_PROC_SYMBOL(public_482f10);
CLANG_FORWARD_PROC_SYMBOL(public_483230);
CLANG_FORWARD_PROC_SYMBOL(public_483580);
CLANG_FORWARD_PROC_SYMBOL(public_585d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc048);

#define public_482ad9 _public_482ad9
#define public_482ae7 _public_482ae7
#define public_482b3a _public_482b3a
#define public_482b44 _public_482b44
#define public_482b56 _public_482b56
#define public_482b76 _public_482b76
#define public_482ba1 _public_482ba1
#define public_482be3 _public_482be3
#define public_482c25 _public_482c25
#define public_482c29 _public_482c29
#define public_482c5b _public_482c5b
#define public_482c8c _public_482c8c
#define public_482cad _public_482cad
#define public_482cb7 _public_482cb7
#define public_482cd4 _public_482cd4
#define public_482ce1 _public_482ce1
#define public_482cee _public_482cee
#define public_482cfc _public_482cfc
#define public_482d28 _public_482d28
#define public_482d32 _public_482d32
#define public_482d5f _public_482d5f

PROC_DECLARE(0x482a90, internal_482a90, public_482a90);
extern "C" NAKED register_t __cdecl internal_482a90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc048 @0x482a98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc048
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66873c]
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x978]
        cmp eax, 1
        jne public_482ad9
        xor edi, edi
        mov dword ptr ds : [esi+0x32C], 4
        jmp public_482ae7
        public_482ad9 : nop
        cmp eax, 3
        mov edi, 1
        je public_482ae7
        mov edi, dword ptr ss : [esp+0x24]
        public_482ae7 : nop
        mov al, byte ptr ss : [esp+0x13]
        xor ebp, ebp
        push 0xC
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ss : [esp+0x2C], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x30], eax
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        push edi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x44], eax
        call public_437f70
        cmp dword ptr ds : [esi+0x978], 3
        mov ecx, esi
        jne public_482b3a
        lea edx, ss:[esp+0x28]
        push edx
        call public_483230
        jmp public_482b44
        public_482b3a : nop
        lea eax, ss:[esp+0x28]
        push eax
        call public_482f10
        public_482b44 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_482c5b
        public_482b56 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jle public_482c29
        mov dword ptr ss : [esp+0x20], eax
        jge public_482b76
        mov dword ptr ss : [esp+0x20], 0
        public_482b76 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ebx, 4
        call dword ptr ds : [public_5c6360]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x978]
        add esp, 4
        cmp eax, 3
        jne public_482ba1
        push ebp
        call public_47e460
        add esp, 4
        mov ebx, eax
        jmp public_482be3
        public_482ba1 : nop
        mov eax, dword ptr ds : [public_66873c]
        test eax, eax
        je public_482be3
        push eax
        mov ecx, offset public_668708
        call public_43a510
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_482be3
        push ebp
        call dword ptr ds : [public_5c632c]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        push eax
        call public_438060
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_482be3
        mov ebx, 5
        public_482be3 : nop
        mov eax, dword ptr ds : [edi]
        push 0
        push 0
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x24]
        push 0
        mov ecx, esi
        push edx
        push 0
        push 0
        push 0
        push 0
        push eax
        call public_47f040
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        push ebx
        push ebp
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, esi
        call public_47c740
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        jne public_482c25
        test al, al
        je public_482c25
        mov dword ptr ss : [esp+0x1C], edi
        public_482c25 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_482c29 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        jne public_482b56
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_482c5b
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_5c6360]
        add esp, 4
        push 0
        push eax
        mov ecx, esi
        call public_47ba90
        public_482c5b : nop
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+0x4E2], 0
        call public_47f3e0
        cmp ebp, dword ptr ds : [esi+0x3C8]
        je public_482ce1
        mov ecx, dword ptr ds : [esi+0x3D0]
        test ecx, ecx
        je public_482c8c
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp-1]
        push edx
        push 0
        push 0x37
        call dword ptr ds : [eax+0xA8]
        public_482c8c : nop
        mov eax, dword ptr ds : [esi+0x3C4]
        test eax, eax
        je public_482cd4
        add eax, 5
        cmp eax, ebp
        jbe public_482cd4
        cmp ebp, 5
        jbe public_482cad
        lea eax, ss:[ebp-5]
        mov dword ptr ds : [esi+0x3C4], eax
        jmp public_482cb7
        public_482cad : nop
        mov dword ptr ds : [esi+0x3C4], 0
        public_482cb7 : nop
        mov ecx, dword ptr ds : [esi+0x3D0]
        test ecx, ecx
        je public_482cd4
        mov eax, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        public_482cd4 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x3C8], ebp
        call public_482a90
        public_482ce1 : nop
        or eax, 0xFFFFFFFF
        test ebp, ebp
        jne public_482cee
        mov dword ptr ds : [esi+0x3A4], eax
        public_482cee : nop
        cmp dword ptr ds : [esi+0x3A4], ebp
        jb public_482cfc
        mov dword ptr ds : [esi+0x3A4], eax
        public_482cfc : nop
        cmp dword ptr ds : [esi+0x978], 3
        jne public_482d28
        mov ecx, esi
        call public_483580
        test eax, eax
        je public_482d28
        mov esi, dword ptr ds : [esi+0x974]
        test esi, esi
        je public_482d28
        mov ecx, dword ptr ds : [esi+0x330]
        push 1
        push eax
        call public_585d90
        public_482d28 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_482d5f
        public_482d32 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x30], ecx
        jne public_482d32
        mov edi, dword ptr ss : [esp+0x2C]
        public_482d5f : nop
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x482a90)
    }
}

#undef public_482ad9
#undef public_482ae7
#undef public_482b3a
#undef public_482b44
#undef public_482b56
#undef public_482b76
#undef public_482ba1
#undef public_482be3
#undef public_482c25
#undef public_482c29
#undef public_482c5b
#undef public_482c8c
#undef public_482cad
#undef public_482cb7
#undef public_482cd4
#undef public_482ce1
#undef public_482cee
#undef public_482cfc
#undef public_482d28
#undef public_482d32
#undef public_482d5f
