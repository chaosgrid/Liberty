#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4360e0);
CLANG_FORWARD_PROC_SYMBOL(public_436840);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_436b30);
CLANG_FORWARD_PROC_SYMBOL(public_436b50);
CLANG_FORWARD_PROC_SYMBOL(public_436ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_436100 _public_436100
#define public_436113 _public_436113
#define public_436116 _public_436116
#define public_43611a _public_43611a
#define public_436179 _public_436179
#define public_436191 _public_436191
#define public_43619b _public_43619b
#define public_43619f _public_43619f
#define public_4361b0 _public_4361b0
#define public_4361eb _public_4361eb
#define public_4361fa _public_4361fa
#define public_43621b _public_43621b
#define public_43623c _public_43623c
#define public_43624a _public_43624a
#define public_436269 _public_436269
#define public_436275 _public_436275
#define public_436291 _public_436291
#define public_4362ac _public_4362ac
#define public_4362b3 _public_4362b3
#define public_4362d6 _public_4362d6

PROC_DECLARE(0x4360e0, internal_4360e0, public_4360e0);
extern "C" NAKED register_t __cdecl internal_4360e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_43611a
        lea esp, ss:[esp]
        public_436100 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_436113
        mov ebp, dword ptr ss : [ebp]
        jmp public_436116
        public_436113 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_436116 : nop
        cmp ebp, edx
        jne public_436100
        public_43611a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_436291
        push 0
        push esi
        mov ecx, edi
        call public_436b30
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_436ea0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_436179
        cmp ebp, dword ptr ds : [edi+8]
        jne public_436179
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_436179
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_43619f
        mov dword ptr ds : [eax+8], ebx
        jmp public_43619f
        public_436179 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_436191
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_43619b
        public_436191 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_43619b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_43619b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_43619f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_436275
        lea ecx, ds:[ecx]
        public_4361b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x2C]
        test cl, cl
        jne public_436275
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_43621b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_4361eb
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_436269
        public_4361eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_4361fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_4361fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_436269
        public_43621b : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_43623c
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_436269
        public_43623c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_43624a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_43624a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_436269 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_4361b0
        public_436275 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_436291 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_4362ac
        cmp esi, dword ptr ds : [ecx]
        je public_4362b3
        lea ecx, ss:[esp+0x10]
        call public_436b50
        mov edx, dword ptr ss : [esp+0x10]
        public_4362ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_4362d6
        public_4362b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_436840
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_4362d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4360e0)
    }
}

#undef public_436100
#undef public_436113
#undef public_436116
#undef public_43611a
#undef public_436179
#undef public_436191
#undef public_43619b
#undef public_43619f
#undef public_4361b0
#undef public_4361eb
#undef public_4361fa
#undef public_43621b
#undef public_43623c
#undef public_43624a
#undef public_436269
#undef public_436275
#undef public_436291
#undef public_4362ac
#undef public_4362b3
#undef public_4362d6
