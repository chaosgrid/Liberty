#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b44bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b442ef _public_6b442ef
#define public_6b44306 _public_6b44306
#define public_6b4431c _public_6b4431c
#define public_6b4433d _public_6b4433d
#define public_6b44353 _public_6b44353
#define public_6b44375 _public_6b44375
#define public_6b4438b _public_6b4438b
#define public_6b443b0 _public_6b443b0
#define public_6b443c7 _public_6b443c7
#define public_6b44407 _public_6b44407
#define public_6b4442d _public_6b4442d
#define public_6b4445a _public_6b4445a
#define public_6b4449c _public_6b4449c
#define public_6b444c4 _public_6b444c4
#define public_6b444f2 _public_6b444f2
#define public_6b44520 _public_6b44520
#define public_6b44584 _public_6b44584
#define public_6b445da _public_6b445da
#define public_6b4461a _public_6b4461a
#define public_6b4462f _public_6b4462f
#define public_6b44659 _public_6b44659
#define public_6b44681 _public_6b44681
#define public_6b44695 _public_6b44695
#define public_6b446a4 _public_6b446a4
#define public_6b446b0 _public_6b446b0
#define public_6b446e3 _public_6b446e3

PROC_DECLARE(0x6b442a0, internal_6b442a0, public_6b442a0);
extern "C" NAKED register_t __cdecl internal_6b442a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        lea esi, ss:[ebp+0x10]
        push edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        push eax
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b442ef
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6b442ef : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b44306
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b44306 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b4431c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6b4431c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b4433d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b4433d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b44353
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6b44353 : nop
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ss : [ebp+0x24]
        mov byte ptr ds : [eax], dl
        mov cl, byte ptr ss : [ebp+0x30]
        inc eax
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b44375
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b44375 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b4438b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6b4438b : nop
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        mov dword ptr ds : [edi], eax
        jbe public_6b44681
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x40], ecx
        je public_6b44681
        nop 
        lea esp, ss:[esp]
        public_6b443b0 : nop
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b443c7
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b443c7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44695
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [public_6b6b014]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x40]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edx+0xC]
        push eax
        call ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        mov edx, 0x16
        jbe public_6b44407
        mov dword ptr ds : [esi+0xC], edx
        public_6b44407 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b446a4
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b4442d
        mov dword ptr ds : [esi+0xC], edx
        public_6b4442d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b446a4
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b4445a
        mov dword ptr ds : [esi+0xC], edx
        public_6b4445a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b446a4
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [edx+0x14]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ss : [esp+0x40]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edx+0x18]
        push eax
        call ebx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        mov edx, 0x16
        jbe public_6b4449c
        mov dword ptr ds : [esi+0xC], edx
        public_6b4449c : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b446a4
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b444c4
        mov dword ptr ds : [esi+0xC], edx
        public_6b444c4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b446a4
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b444f2
        mov dword ptr ds : [esi+0xC], edx
        public_6b444f2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b446a4
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b44520
        mov dword ptr ds : [esi+0xC], edx
        public_6b44520 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b446a4
        lea ecx, ss:[esp+0x40]
        call public_6b44bc0
        mov edx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov ebx, dword ptr ds : [edi]
        add eax, 0x1C
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], edx
        call public_6b3a160
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b4461a
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b44584
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b44584 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44695
        lea ecx, ss:[esp+0x40]
        call public_6b44bc0
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x2C]
        mov ebx, dword ptr ds : [edi]
        add eax, 0x28
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        call public_6b3a160
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b445da
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b445da : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44695
        mov edx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ds : [edi]
        add edx, 0x3C
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x34], eax
        call public_6b39ec0
        add ebx, 0x10
        mov dword ptr ds : [edi], ebx
        public_6b4461a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b4462f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b4462f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44695
        mov ecx, dword ptr ss : [esp+0x40]
        mov dl, byte ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b44659
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b44659 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b44695
        mov ecx, dword ptr ss : [esp+0x40]
        mov dl, byte ptr ds : [ecx+0x4D]
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x40], ecx
        jne public_6b443b0
        public_6b44681 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        push ecx
        push edi
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b446b0
        public_6b44695 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6b446a4 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6b446b0 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b446e3
        mov dword ptr ds : [ecx+0x10], esi
        public_6b446e3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6b442a0)
    }
}

#undef public_6b442ef
#undef public_6b44306
#undef public_6b4431c
#undef public_6b4433d
#undef public_6b44353
#undef public_6b44375
#undef public_6b4438b
#undef public_6b443b0
#undef public_6b443c7
#undef public_6b44407
#undef public_6b4442d
#undef public_6b4445a
#undef public_6b4449c
#undef public_6b444c4
#undef public_6b444f2
#undef public_6b44520
#undef public_6b44584
#undef public_6b445da
#undef public_6b4461a
#undef public_6b4462f
#undef public_6b44659
#undef public_6b44681
#undef public_6b44695
#undef public_6b446a4
#undef public_6b446b0
#undef public_6b446e3
