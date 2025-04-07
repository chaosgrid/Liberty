#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9b30);
CLANG_FORWARD_PROC_SYMBOL(public_6f19c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);

#define public_6eca2e0 _public_6eca2e0
#define public_6eca307 _public_6eca307
#define public_6eca330 _public_6eca330
#define public_6eca356 _public_6eca356
#define public_6eca380 _public_6eca380
#define public_6eca3a6 _public_6eca3a6
#define public_6eca3cf _public_6eca3cf
#define public_6eca3eb _public_6eca3eb
#define public_6eca400 _public_6eca400
#define public_6eca43e _public_6eca43e
#define public_6eca44b _public_6eca44b
#define public_6eca467 _public_6eca467
#define public_6eca480 _public_6eca480
#define public_6eca4b0 _public_6eca4b0
#define public_6eca4c3 _public_6eca4c3
#define public_6eca4e9 _public_6eca4e9
#define public_6eca511 _public_6eca511
#define public_6eca529 _public_6eca529
#define public_6eca53b _public_6eca53b

PROC_DECLARE(0x6eca2b0, internal_6eca2b0, public_6eca2b0);
extern "C" NAKED register_t __cdecl internal_6eca2b0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        add ecx, 0xA4
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ecx+0xA8]
        je public_6eca467
        nop 
        public_6eca2e0 : nop
        mov ebx, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[ebx+0x17C]
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x180]
        je public_6eca44b
        public_6eca307 : nop
        mov eax, dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6eca330
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x180]
        jne public_6eca307
        jmp public_6eca44b
        public_6eca330 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        add ecx, 0xA4
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ecx+0xA8]
        je public_6eca3eb
        public_6eca356 : nop
        mov edi, dword ptr ds : [eax+0x10]
        test edi, edi
        je public_6eca3cf
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[edi+0x17C]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edi+0x180]
        je public_6eca3cf
        lea esp, ss:[esp]
        public_6eca380 : nop
        mov eax, dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6eca3a6
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edi+0x180]
        jne public_6eca380
        jmp public_6eca3cf
        public_6eca3a6 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, 0x3FFFFFFF
        je public_6eca3cf
        mov edi, dword ptr ds : [edi+4]
        test edi, 0x3FFFFFFF
        je public_6eca3cf
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        push edx
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        push eax
        call public_6ec9b30
        fstp st(0)
        public_6eca3cf : nop
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [edx+0xA8]
        jne public_6eca356
        public_6eca3eb : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+0xC8]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6eca44b
        lea ebx, ds:[ebx]
        public_6eca400 : nop
        lea eax, ds:[esi+0x10]
        lea edi, ds:[ebx+8]
        push eax
        mov ecx, edi
        call public_6f19c70
        test al, al
        je public_6eca43e
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, 0x3FFFFFFF
        je public_6eca43e
        mov eax, dword ptr ds : [edi]
        test eax, 0x3FFFFFFF
        je public_6eca43e
        mov edx, dword ptr ds : [esi+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6ec9b30
        fstp st(0)
        public_6eca43e : nop
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [eax+0xC8]
        jne public_6eca400
        public_6eca44b : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ecx+0xA8]
        jne public_6eca2e0
        public_6eca467 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+0xC8]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6eca53b
        lea ebx, ds:[ebx]
        public_6eca480 : nop
        lea eax, ds:[esi+0xC]
        lea ebx, ss:[ebp+8]
        push eax
        mov ecx, ebx
        call public_6f19c70
        test al, al
        je public_6eca529
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+0xA8]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, dword ptr ds : [ecx+0xA8]
        je public_6eca529
        lea ecx, ds:[ecx]
        public_6eca4b0 : nop
        mov edi, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [edi+0x180]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6eca511
        public_6eca4c3 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ds : [esi+0x10]
        je public_6eca4e9
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [edi+0x180]
        jne public_6eca4c3
        jmp public_6eca511
        public_6eca4e9 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, 0x3FFFFFFF
        je public_6eca511
        mov edi, dword ptr ds : [edi+4]
        test edi, 0x3FFFFFFF
        je public_6eca511
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push edi
        push eax
        call public_6ec9b30
        fstp st(0)
        public_6eca511 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ecx+0xA8]
        jne public_6eca4b0
        public_6eca529 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edx+0xC8]
        jne public_6eca480
        public_6eca53b : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eca2b0)
    }
}

#undef public_6eca2e0
#undef public_6eca307
#undef public_6eca330
#undef public_6eca356
#undef public_6eca380
#undef public_6eca3a6
#undef public_6eca3cf
#undef public_6eca3eb
#undef public_6eca400
#undef public_6eca43e
#undef public_6eca44b
#undef public_6eca467
#undef public_6eca480
#undef public_6eca4b0
#undef public_6eca4c3
#undef public_6eca4e9
#undef public_6eca511
#undef public_6eca529
#undef public_6eca53b
