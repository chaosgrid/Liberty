#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4291c0);
CLANG_FORWARD_PROC_SYMBOL(public_5288a0);

#define public_5288b7 _public_5288b7
#define public_5288c3 _public_5288c3
#define public_5288cf _public_5288cf
#define public_5288e4 _public_5288e4
#define public_52890a _public_52890a
#define public_528919 _public_528919
#define public_528925 _public_528925
#define public_528937 _public_528937
#define public_528949 _public_528949
#define public_52896b _public_52896b
#define public_528976 _public_528976

PROC_DECLARE(0x5288a0, internal_5288a0, public_5288a0);
extern "C" NAKED register_t __cdecl internal_5288a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_528919
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_5288b7
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5288b7 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_5288c3
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_5288c3 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        test ecx, ecx
        je public_5288cf
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5288cf : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_5288e4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_528976
        public_5288e4 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_528976
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x44]
        je public_52890a
        mov eax, dword ptr ds : [ecx]
        pop esi
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [eax+0x64]
        public_52890a : nop
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        pop esi
        ret 4
        public_528919 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        je public_528925
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_528925 : nop
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_528937
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_528937 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_528949
        mov eax, dword ptr ds : [ecx+0x64]
        push 0
        push eax
        call public_4291c0
        public_528949 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_528976
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x3C]
        je public_52896b
        mov edx, dword ptr ds : [ecx]
        pop esi
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [edx+0x64]
        public_52896b : nop
        mov eax, dword ptr ds : [ecx+0x64]
        push 0
        push eax
        call public_4291c0
        public_528976 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5288a0)
    }
}

#undef public_5288b7
#undef public_5288c3
#undef public_5288cf
#undef public_5288e4
#undef public_52890a
#undef public_528919
#undef public_528925
#undef public_528937
#undef public_528949
#undef public_52896b
#undef public_528976
