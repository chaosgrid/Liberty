#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_629b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_629b2c2 _public_629b2c2
#define public_629b2d6 _public_629b2d6
#define public_629b2dc _public_629b2dc
#define public_629b2e5 _public_629b2e5
#define public_629b322 _public_629b322
#define public_629b330 _public_629b330
#define public_629b344 _public_629b344
#define public_629b34a _public_629b34a
#define public_629b353 _public_629b353
#define public_629b368 _public_629b368

PROC_DECLARE(0x629b2b0, internal_629b2b0, public_629b2b0);
extern "C" NAKED register_t __cdecl internal_629b2b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_629b2dc
        public_629b2c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], 0
        je public_629b2d6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_629b2d6 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_629b2c2
        public_629b2dc : nop
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_629b322
        public_629b2e5 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x18], ecx
        jne public_629b2e5
        public_629b322 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea ebp, ds:[edi+4]
        je public_629b34a
        mov edi, edi
        public_629b330 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], 0
        je public_629b344
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_629b344 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_629b330
        public_629b34a : nop
        mov ebx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_629b368
        public_629b353 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_6271cc0
        cmp esi, ebx
        jne public_629b353
        public_629b368 : nop
        mov dword ptr ds : [edi+0x1C], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x629b2b0)
    }
}

#undef public_629b2c2
#undef public_629b2d6
#undef public_629b2dc
#undef public_629b2e5
#undef public_629b322
#undef public_629b330
#undef public_629b344
#undef public_629b34a
#undef public_629b353
#undef public_629b368
