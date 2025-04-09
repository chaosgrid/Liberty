#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437d90);
CLANG_FORWARD_PROC_SYMBOL(public_438220);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_47eab0);
CLANG_FORWARD_PROC_SYMBOL(public_47f040);
CLANG_FORWARD_PROC_SYMBOL(public_47fb40);
CLANG_FORWARD_PROC_SYMBOL(public_483580);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c41d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4200);
CLANG_FORWARD_PROC_SYMBOL(public_4c4230);
CLANG_FORWARD_PROC_SYMBOL(public_4c4610);
CLANG_FORWARD_PROC_SYMBOL(public_4c4640);
CLANG_FORWARD_PROC_SYMBOL(public_4c4d50);
CLANG_FORWARD_PROC_SYMBOL(public_4c6860);
CLANG_FORWARD_PROC_SYMBOL(public_4f6200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_47eb35 _public_47eb35
#define public_47eb68 _public_47eb68
#define public_47ebff _public_47ebff
#define public_47ec03 _public_47ec03
#define public_47ec33 _public_47ec33
#define public_47ec6a _public_47ec6a
#define public_47ec93 _public_47ec93
#define public_47ecb8 _public_47ecb8
#define public_47ecca _public_47ecca
#define public_47ed2c _public_47ed2c
#define public_47ed3c _public_47ed3c
#define public_47ed90 _public_47ed90
#define public_47eda6 _public_47eda6
#define public_47eda8 _public_47eda8
#define public_47edfa _public_47edfa
#define public_47edfc _public_47edfc
#define public_47ee29 _public_47ee29
#define public_47ee2f _public_47ee2f
#define public_47ee48 _public_47ee48
#define public_47ee4c _public_47ee4c
#define public_47ee85 _public_47ee85
#define public_47ee8c _public_47ee8c

PROC_DECLARE(0x47eab0, internal_47eab0, public_47eab0);
extern "C" NAKED register_t __cdecl internal_47eab0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        test edi, edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        je public_47ee8c
        mov ecx, dword ptr ss : [ebp+0x360]
        test ecx, ecx
        je public_47ee8c
        call public_483580
        mov ebx, eax
        push ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_5c6088]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_47ee8c
        mov eax, dword ptr ds : [public_66873c]
        push eax
        mov ecx, offset public_668708
        call public_43a510
        push ebx
        mov ecx, eax
        mov dword ptr ss : [esp+0x24], eax
        call public_437d90
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_47ee4c
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jle public_47ee4c
        cmp eax, edi
        jae public_47eb35
        mov dword ptr ss : [esp+0x30], eax
        mov edi, eax
        public_47eb35 : nop
        sub eax, edi
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [public_66873c]
        push edi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        call public_438220
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_47eb68
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        je public_47eb68
        mov ecx, ebp
        call public_47e9e0
        public_47eb68 : nop
        mov edx, dword ptr ss : [ebp+0x360]
        cmp dword ptr ds : [edx+0x978], 3
        mov byte ptr ss : [esp+0x13], 1
        jne public_47ecb8
        mov eax, dword ptr ss : [ebp+0x394]
        cmp byte ptr ds : [eax], 0
        lea edi, ss:[ebp+0x394]
        je public_47ec33
        mov ecx, dword ptr ds : [esi+0x50]
        push 0x3F800000
        push edi
        push ecx
        call public_4c41d0
        mov eax, dword ptr ds : [esi+0x50]
        mov edi, dword ptr ds : [edi]
        push eax
        mov byte ptr ss : [esp+0x23], 0
        call dword ptr ds : [public_5c603c]
        mov ebp, eax
        add esp, 0x10
        test ebp, ebp
        je public_47ec03
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x11
        jne public_47ec03
        add ebp, 0x98
        mov ecx, ebp
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_47ebff
        push ebp
        call dword ptr ds : [public_5c639c]
        add esp, 4
        test eax, eax
        je public_47ebff
        mov cl, byte ptr ds : [eax+0x78]
        test cl, cl
        jne public_47ebff
        push edi
        push 0
        mov ecx, offset public_674c0c
        call public_4f6200
        public_47ebff : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_47ec03 : nop
        mov eax, dword ptr ds : [public_671c70]
        push 0
        push eax
        call public_489e80
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push ecx
        lea ecx, ds:[edx+0x330]
        call public_4c6860
        mov ebp, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x30]
        jmp public_47ecca
        public_47ec33 : nop
        mov eax, dword ptr ds : [esi+0x50]
        push eax
        call public_47e460
        add esp, 4
        cmp eax, 3
        jne public_47ec6a
        cmp dword ptr ss : [esp+0x30], 1
        jne public_47ec6a
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, dword ptr ds : [public_674a8c]
        je public_47ec6a
        cmp eax, dword ptr ds : [public_674a88]
        je public_47ec6a
        push eax
        mov ecx, ebp
        call public_47fb40
        test al, al
        je public_47ec93
        public_47ec6a : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+0x50]
        push 0x3F800000
        push ecx
        push edx
        call public_4c4230
        mov eax, dword ptr ds : [public_671c6c]
        push 0
        push eax
        call public_489e80
        mov edi, dword ptr ss : [esp+0x44]
        add esp, 0x14
        jmp public_47ecca
        public_47ec93 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        push 0x3F800000
        push ecx
        call public_4c4200
        mov edx, dword ptr ds : [public_671c70]
        push 0
        push edx
        call public_489e80
        mov edi, dword ptr ss : [esp+0x40]
        add esp, 0x10
        jmp public_47ecca
        public_47ecb8 : nop
        mov eax, dword ptr ds : [esi+0x50]
        push 0x3F800000
        push edi
        push eax
        call public_4c4230
        add esp, 0xC
        public_47ecca : nop
        mov eax, dword ptr ds : [ebx]
        push eax
        mov ecx, ebp
        call public_47f040
        imul eax, edi
        push eax
        call public_4c4d50
        mov byte ptr ss : [ebp+0x4E5], 0
        mov byte ptr ss : [ebp+0x3B8], 1
        mov eax, dword ptr ds : [esi+0xB8]
        add esp, 4
        test eax, eax
        je public_47ee4c
        mov eax, dword ptr ds : [esi+0xBC]
        test eax, eax
        jle public_47ee4c
        mov ecx, dword ptr ds : [esi+0x50]
        mov edi, dword ptr ds : [public_5c603c]
        push ecx
        mov dword ptr ss : [esp+0x1C], 0
        call edi
        add esp, 4
        test eax, eax
        je public_47ed2c
        mov edx, dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [esp+0x18], edx
        public_47ed2c : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_47ed3c
        mov dword ptr ss : [esp+0x18], 0
        public_47ed3c : nop
        mov eax, dword ptr ds : [esi+0xB8]
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call edi
        mov edi, dword ptr ds : [esi+0xBC]
        add esp, 4
        test eax, eax
        je public_47eda8
        mov edx, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [eax+0x5C]
        push edx
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_5c632c]
        mov ebx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov ebp, eax
        push ebp
        mov ecx, ebx
        call public_437d90
        test eax, eax
        je public_47eda6
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jle public_47eda6
        cmp ecx, edi
        jge public_47ed90
        mov edi, ecx
        public_47ed90 : nop
        sub ecx, edi
        push edi
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [public_66873c]
        push ebp
        push eax
        mov ecx, ebx
        call public_438220
        jmp public_47eda8
        public_47eda6 : nop
        xor edi, edi
        public_47eda8 : nop
        call public_4c4610
        fstp dword ptr ss : [esp+0x20]
        call public_4c4640
        fsubr dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        mov ebp, edi
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_47edfa
        fdiv dword ptr ss : [esp+0x1C]
        call public_5b7ec0
        mov ebp, eax
        cmp ebp, edi
        jle public_47edfc
        mov ebp, edi
        jmp public_47edfc
        public_47edfa : nop
        fstp st(0)
        public_47edfc : nop
        mov eax, dword ptr ds : [esi+0xB8]
        mov edx, dword ptr ds : [public_5c6398]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx]
        push 0x3F800000
        push 0
        push eax
        add ecx, 0x34C
        call dword ptr ds : [public_5c6384]
        test eax, eax
        je public_47ee29
        sub edi, dword ptr ds : [eax+0x14]
        public_47ee29 : nop
        cmp ebp, edi
        jle public_47ee2f
        mov ebp, edi
        public_47ee2f : nop
        test ebp, ebp
        jle public_47ee48
        mov edx, dword ptr ds : [esi+0xB8]
        push 0x3F800000
        push ebp
        push edx
        call public_4c4230
        add esp, 0xC
        public_47ee48 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_47ee4c : nop
        mov eax, dword ptr ss : [ebp+0x360]
        cmp dword ptr ds : [eax+0x978], 2
        je public_47ee8c
        mov eax, dword ptr ss : [ebp+0x32C]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+0x3BC], ecx
        je public_47ee85
        cmp eax, 2
        je public_47ee85
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x3C0], 1
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        public_47ee85 : nop
        mov byte ptr ss : [ebp+0x3B9], 1
        public_47ee8c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x47eab0)
    }
}

#undef public_47eb35
#undef public_47eb68
#undef public_47ebff
#undef public_47ec03
#undef public_47ec33
#undef public_47ec6a
#undef public_47ec93
#undef public_47ecb8
#undef public_47ecca
#undef public_47ed2c
#undef public_47ed3c
#undef public_47ed90
#undef public_47eda6
#undef public_47eda8
#undef public_47edfa
#undef public_47edfc
#undef public_47ee29
#undef public_47ee2f
#undef public_47ee48
#undef public_47ee4c
#undef public_47ee85
#undef public_47ee8c
