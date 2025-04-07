#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62bed10);
CLANG_FORWARD_PROC_SYMBOL(public_62facf0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fad01 _public_62fad01
#define public_62fad17 _public_62fad17
#define public_62fad32 _public_62fad32
#define public_62fad40 _public_62fad40
#define public_62fad4a _public_62fad4a
#define public_62fad4f _public_62fad4f
#define public_62fad51 _public_62fad51
#define public_62fad55 _public_62fad55
#define public_62fad80 _public_62fad80
#define public_62fadaa _public_62fadaa
#define public_62fadcc _public_62fadcc
#define public_62fadd0 _public_62fadd0
#define public_62fadf3 _public_62fadf3

PROC_DECLARE(0x62facf0, internal_62facf0, public_62facf0);
extern "C" NAKED register_t __cdecl internal_62facf0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_63fca74]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        push edi
        je public_62fad55
        public_62fad01 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_62fad17
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [public_63fca74]
        add esp, 4
        public_62fad17 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_62fad32
        push eax
        call public_62bed10
        mov ecx, dword ptr ds : [public_63fca74]
        add esp, 4
        jmp public_62fad4f
        public_62fad32 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62fad4a
        lea ebx, ds:[ebx]
        public_62fad40 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62fad40
        public_62fad4a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62fad51
        public_62fad4f : nop
        mov esi, eax
        public_62fad51 : nop
        cmp esi, ecx
        jne public_62fad01
        public_62fad55 : nop
        mov edx, dword ptr ds : [public_63fca80]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_62fadcc
        mov edx, eax
        cmp eax, edx
        jne public_62fadcc
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_63fca78]
        cmp edi, eax
        mov esi, edi
        je public_62fadaa
        nop 
        lea esp, ss:[esp]
        public_62fad80 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_63fca70
        call public_62fcef0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fca78]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fad80
        mov ecx, dword ptr ds : [public_63fca74]
        public_62fadaa : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_63fca74]
        mov dword ptr ds : [public_63fca80], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fca74]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_62fadcc : nop
        cmp eax, ecx
        je public_62fadf3
        public_62fadd0 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_63429f0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fca70
        call public_62be400
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_62fadd0
        public_62fadf3 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62facf0)
    }
}

#undef public_62fad01
#undef public_62fad17
#undef public_62fad32
#undef public_62fad40
#undef public_62fad4a
#undef public_62fad4f
#undef public_62fad51
#undef public_62fad55
#undef public_62fad80
#undef public_62fadaa
#undef public_62fadcc
#undef public_62fadd0
#undef public_62fadf3
