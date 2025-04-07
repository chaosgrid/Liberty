#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_636fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6370080);
CLANG_FORWARD_PROC_SYMBOL(public_6371a10);
CLANG_FORWARD_PROC_SYMBOL(public_6373750);
CLANG_FORWARD_PROC_SYMBOL(public_6373d10);
CLANG_FORWARD_PROC_SYMBOL(public_63741f0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378980);

#define public_63700b8 _public_63700b8
#define public_63700c3 _public_63700c3
#define public_63700ef _public_63700ef
#define public_6370125 _public_6370125
#define public_6370135 _public_6370135
#define public_637014f _public_637014f
#define public_6370156 _public_6370156
#define public_637016c _public_637016c
#define public_637019e _public_637019e
#define public_63701bb _public_63701bb
#define public_63701ce _public_63701ce
#define public_63701d5 _public_63701d5
#define public_6370202 _public_6370202
#define public_637022f _public_637022f
#define public_6370234 _public_6370234
#define public_637023d _public_637023d
#define public_637025a _public_637025a
#define public_6370298 _public_6370298
#define public_63702b4 _public_63702b4
#define public_63702be _public_63702be
#define public_63702d9 _public_63702d9
#define public_63702e0 _public_63702e0

PROC_DECLARE(0x6370080, internal_6370080, public_6370080);
extern "C" NAKED register_t __cdecl internal_6370080()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        xor ebx, ebx
        cmp eax, 1
        push ebp
        mov ebp, dword ptr ds : [public_658b24c]
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jl public_63700b8
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63ef384 @0x63700a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef384
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63700b8 : nop
        mov edx, dword ptr ds : [public_658b81c]
        cmp edx, ebx
        push edi
        je public_63700ef
        public_63700c3 : nop
        mov eax, dword ptr ds : [edx+0x30]
        test eax, eax
        je public_63700ef
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [esi]
        inc ecx
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[ebp+1]
        mov dword ptr ds : [esi+eax*4+4], ecx
        xor eax, eax
        mov ecx, ebp
        lea edi, ds:[esi+8]
        rep stosd
        mov edx, dword ptr ds : [edx+0x30]
        test edx, edx
        jne public_63700c3
        public_63700ef : nop
        mov ecx, dword ptr ds : [public_658b24c]
        dec ecx
        imul ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6373d10
        mov edx, dword ptr ds : [public_658b8f8]
        push edx
        call public_636ec10
        mov edi, dword ptr ds : [public_658b81c]
        add esp, 8
        test edi, edi
        mov ebp, eax
        mov dword ptr ss : [esp+0x18], ebp
        je public_6370156
        mov eax, dword ptr ds : [public_658b24c]
        public_6370125 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6370156
        mov esi, 1
        cmp eax, esi
        jle public_637014f
        public_6370135 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push ebp
        push esi
        push edi
        call public_636fd10
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x10
        inc esi
        cmp esi, eax
        jl public_6370135
        public_637014f : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_6370125
        public_6370156 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6370202
        mov edi, dword ptr ds : [public_658b81c]
        test edi, edi
        je public_63701d5
        public_637016c : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_63701d5
        test dword ptr ds : [edi+0x50], 0x100000
        je public_63701ce
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        je public_63701ce
        mov ebp, dword ptr ds : [eax+4]
        push eax
        xor esi, esi
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jle public_63701ce
        mov ebx, 4
        public_637019e : nop
        cmp ebp, 1
        jne public_63701bb
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push esi
        push edi
        call public_6373750
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        public_63701bb : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        mov ebp, dword ptr ds : [ecx+ebx+4]
        inc esi
        add ebx, 4
        cmp esi, eax
        jl public_637019e
        mov ebx, dword ptr ss : [esp+0x20]
        public_63701ce : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_637016c
        public_63701d5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6370202
        push eax
/*FIXUP push offset public_63ef338 @0x63701de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef338
        call public_6356960
        mov edx, dword ptr ds : [public_658b7fc]
        push edx
        call public_63741f0
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        public_6370202 : nop
        cmp dword ptr ds : [public_658b078], 2
        pop edi
        jl public_637025a
        mov edx, dword ptr ds : [public_658b8f8]
        test edx, edx
        je public_637023d
        mov esi, dword ptr ds : [edx+4]
        push edx
        call public_636ec10
        mov edx, dword ptr ds : [public_658b8f8]
        add esp, 4
        test eax, eax
        jle public_637023d
        lea ecx, ds:[edx+4]
        public_637022f : nop
        test esi, esi
        jne public_6370234
        inc ebx
        public_6370234 : nop
        mov esi, dword ptr ds : [ecx+4]
        add ecx, 4
        dec eax
        jne public_637022f
        public_637023d : nop
        push edx
        call public_636ec10
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
/*FIXUP push offset public_63ef2ec @0x637024d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef2ec
        call public_6356960
        add esp, 0x10
/*FIXUP public_637025a : nop
        push offset public_658b8f8 @0x637025a*/
  FIXUP public_637025a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f8
        call public_636e740
        mov eax, dword ptr ds : [public_658b0e8]
        add esp, 4
        test eax, eax
        jne public_6370298
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_6370298
        mov eax, dword ptr ds : [public_658b05c]
        test eax, eax
        je public_63702e0
        mov ecx, dword ptr ds : [public_658b81c]
        push ecx
        call public_6371a10
        add esp, 4
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_6370298 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_63702b4
        mov edx, dword ptr ds : [public_658b81c]
        push 1
        push 0
        push edx
        call public_6378980
        add esp, 0xC
        public_63702b4 : nop
        mov esi, dword ptr ds : [public_658b81c]
        test esi, esi
        je public_63702e0
        public_63702be : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63702e0
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_63702d9
        push 1
        push 0
        push esi
        call public_636f2c0
        add esp, 0xC
        public_63702d9 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_63702be
        public_63702e0 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6370080)
    }
}

#undef public_63700b8
#undef public_63700c3
#undef public_63700ef
#undef public_6370125
#undef public_6370135
#undef public_637014f
#undef public_6370156
#undef public_637016c
#undef public_637019e
#undef public_63701bb
#undef public_63701ce
#undef public_63701d5
#undef public_6370202
#undef public_637022f
#undef public_6370234
#undef public_637023d
#undef public_637025a
#undef public_6370298
#undef public_63702b4
#undef public_63702be
#undef public_63702d9
#undef public_63702e0
