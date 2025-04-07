#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f36be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f36e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f36e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37220);
CLANG_FORWARD_PROC_SYMBOL(public_6f37a40);

#define public_6f35e60 _public_6f35e60
#define public_6f35e73 _public_6f35e73
#define public_6f35e76 _public_6f35e76
#define public_6f35e7a _public_6f35e7a
#define public_6f35ed9 _public_6f35ed9
#define public_6f35ef1 _public_6f35ef1
#define public_6f35efb _public_6f35efb
#define public_6f35eff _public_6f35eff
#define public_6f35f10 _public_6f35f10
#define public_6f35f4b _public_6f35f4b
#define public_6f35f5a _public_6f35f5a
#define public_6f35f7b _public_6f35f7b
#define public_6f35f9c _public_6f35f9c
#define public_6f35faa _public_6f35faa
#define public_6f35fc9 _public_6f35fc9
#define public_6f35fd5 _public_6f35fd5
#define public_6f35ff1 _public_6f35ff1
#define public_6f3600c _public_6f3600c
#define public_6f36013 _public_6f36013
#define public_6f36036 _public_6f36036

PROC_DECLARE(0x6f35e40, internal_6f35e40, public_6f35e40);
extern "C" NAKED register_t __cdecl internal_6f35e40()
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
        je public_6f35e7a
        lea esp, ss:[esp]
        public_6f35e60 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f35e73
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f35e76
        public_6f35e73 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f35e76 : nop
        cmp ebp, edx
        jne public_6f35e60
        public_6f35e7a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f35ff1
        push 0
        push esi
        mov ecx, edi
        call public_6f36ee0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f37a40
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f35ed9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f35ed9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f35ed9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f35eff
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f35eff
        public_6f35ed9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f35ef1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f35efb
        public_6f35ef1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f35efb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f35efb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f35eff : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f35fd5
        lea ecx, ds:[ecx]
        public_6f35f10 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6f35fd5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f35f7b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f35f4b
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f35fc9
        public_6f35f4b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f35f5a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f36e30
        public_6f35f5a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f36e80
        jmp public_6f35fc9
        public_6f35f7b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f35f9c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f35fc9
        public_6f35f9c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f35faa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f36e80
        public_6f35faa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f36e30
        public_6f35fc9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f35f10
        public_6f35fd5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f35ff1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3600c
        cmp esi, dword ptr ds : [ecx]
        je public_6f36013
        lea ecx, ss:[esp+0x10]
        call public_6f37220
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3600c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f36036
        public_6f36013 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f36be0
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
        public_6f36036 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f35e40)
    }
}

#undef public_6f35e60
#undef public_6f35e73
#undef public_6f35e76
#undef public_6f35e7a
#undef public_6f35ed9
#undef public_6f35ef1
#undef public_6f35efb
#undef public_6f35eff
#undef public_6f35f10
#undef public_6f35f4b
#undef public_6f35f5a
#undef public_6f35f7b
#undef public_6f35f9c
#undef public_6f35faa
#undef public_6f35fc9
#undef public_6f35fd5
#undef public_6f35ff1
#undef public_6f3600c
#undef public_6f36013
#undef public_6f36036
