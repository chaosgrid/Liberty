#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4127d0);
CLANG_FORWARD_PROC_SYMBOL(public_413710);
CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_413e80);
CLANG_FORWARD_PROC_SYMBOL(public_4152e0);
CLANG_FORWARD_PROC_SYMBOL(public_417620);

#define public_4150d2 _public_4150d2
#define public_41512f _public_41512f
#define public_41514a _public_41514a
#define public_415174 _public_415174
#define public_4151d5 _public_4151d5
#define public_415258 _public_415258
#define public_41529d _public_41529d
#define public_4152a1 _public_4152a1
#define public_4152c1 _public_4152c1

PROC_DECLARE(0x415090, internal_415090, public_415090);
extern "C" NAKED register_t __cdecl internal_415090()
{
    __asm
    {
        sub esp, 0x2C
        mov eax, dword ptr ds : [public_6105b0]
        push ebx
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+0x24], eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        je public_4152c1
        xor ebx, ebx
        mov dword ptr ss : [ebp+0x24], eax
        cmp dword ptr ss : [ebp+0x30], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        jne public_4150d2
        mov eax, dword ptr ss : [ebp+0x14]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        call public_413710
        add esp, 4
        mov dword ptr ss : [ebp+0x30], eax
        public_4150d2 : nop
        mov esi, dword ptr ss : [ebp+0x30]
        cmp esi, ebx
        je public_4152c1
        cmp dword ptr ds : [esi], ebx
        jne public_41514a
        call public_417620
        mov ecx, dword ptr ds : [esi+0x15C]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [public_61663c]
        mov eax, dword ptr ds : [public_616638]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        add ecx, 4
        call public_413df0
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+0x20]
        cmp ecx, dword ptr ds : [public_6105b0]
        je public_41512f
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, ebx
        je public_41512f
        push eax
        mov ecx, offset public_616640
        call public_413e80
        mov dword ptr ds : [edi+0x14], ebx
        public_41512f : nop
        cmp dword ptr ds : [edi+0x14], ebx
        jne public_41514a
        push ebx
        mov ecx, edi
        call public_4127d0
        cmp dword ptr ds : [edi+0x14], ebx
        jne public_41514a
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi], ebx
        public_41514a : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebx
        je public_4152c1
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x2C], eax
        cmp ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x14], ebx
        je public_4152c1
        public_415174 : nop
        movzx ecx, byte ptr ds : [ebx]
        mov edx, dword ptr ds : [esi+4]
        cmp edx, dword ptr ds : [public_6105b0]
        mov dword ptr ss : [esp+0x20], ecx
        je public_4152a1
        cmp dword ptr ds : [esi], 0
        jne public_4151d5
        call public_417620
        mov ecx, dword ptr ds : [esi+0x15C]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [public_61663c]
        mov eax, dword ptr ds : [public_616638]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        add ecx, 4
        call public_413df0
        mov ecx, dword ptr ds : [esi]
        push 0
        call public_4152e0
        test eax, eax
        jne public_4151d5
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi], 0
        public_4151d5 : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_4152a1
        mov eax, dword ptr ds : [public_6105b0]
        push 0
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call public_4152e0
        mov ebx, eax
        test ebx, ebx
        je public_41529d
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp]
        lea ecx, ds:[esi+8]
        push ecx
        push eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [eax+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [ebx+8]
        xor edi, edi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edi
        fild qword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x10], edi
        fidiv dword ptr ss : [esp+0x2C]
        lea eax, ds:[esi+0x50]
        lea ecx, ds:[esi+8]
        mov edx, 0x11
        fld dword ptr ds : [public_5c7474]
        public_415258 : nop
        fild dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], edi
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        add ecx, 4
        add eax, 0x10
        dec edx
        fstp dword ptr ss : [esp+0x10]
        fild qword ptr ss : [esp+0x34]
        fdivr dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax-0xC], ebp
        fstp dword ptr ds : [eax-0x14]
        fst dword ptr ds : [eax-8]
        fld dword ptr ss : [esp+0x18]
        jne public_415258
        mov ebp, dword ptr ss : [esp+0x1C]
        fstp st(0)
        fstp st(0)
        public_41529d : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_4152a1 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+eax*4+8]
        mov edx, dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ss : [ebp+0xC]
        add edx, ecx
        inc ebx
        cmp ebx, eax
        mov dword ptr ss : [ebp+0x28], edx
        mov dword ptr ss : [esp+0x14], ebx
        jne public_415174
        public_4152c1 : nop
        mov edx, dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0x2C]
        pop ebp
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x415090)
    }
}

#undef public_4150d2
#undef public_41512f
#undef public_41514a
#undef public_415174
#undef public_4151d5
#undef public_415258
#undef public_41529d
#undef public_4152a1
#undef public_4152c1
