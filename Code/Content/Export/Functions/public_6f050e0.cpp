#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee010);
CLANG_FORWARD_PROC_SYMBOL(public_6eee050);
CLANG_FORWARD_PROC_SYMBOL(public_6eee7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f050e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f05100 _public_6f05100
#define public_6f05147 _public_6f05147
#define public_6f05172 _public_6f05172
#define public_6f051a6 _public_6f051a6
#define public_6f051c7 _public_6f051c7
#define public_6f051ec _public_6f051ec
#define public_6f051fa _public_6f051fa
#define public_6f05261 _public_6f05261
#define public_6f05266 _public_6f05266
#define public_6f0526e _public_6f0526e
#define public_6f05281 _public_6f05281
#define public_6f0528e _public_6f0528e
#define public_6f052b0 _public_6f052b0
#define public_6f052c4 _public_6f052c4
#define public_6f05349 _public_6f05349
#define public_6f053b2 _public_6f053b2
#define public_6f053c8 _public_6f053c8
#define public_6f053e6 _public_6f053e6
#define public_6f053fb _public_6f053fb
#define public_6f05404 _public_6f05404
#define public_6f05418 _public_6f05418
#define public_6f0541f _public_6f0541f
#define public_6f05432 _public_6f05432

PROC_DECLARE(0x6f050e0, internal_6f050e0, public_6f050e0);
extern "C" NAKED register_t __cdecl internal_6f050e0()
{
    __asm
    {
        sub esp, 0x1C
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f05432
        push ebx
        push esi
        push edi
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f05100 : nop
        push offset public_6fb80b0 @0x6f05100*/
  FIXUP public_6f05100 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb80b0
        mov ecx, ebp
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f0541f
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        mov ebx, dword ptr ds : [public_6fb3018]
        xor edi, edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        call ebx
        test al, al
        je public_6f051fa
        public_6f05147 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f0514d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f05172
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f051ec
/*FIXUP public_6f05172 : nop
        push offset public_6fb80a0 @0x6f05172*/
  FIXUP public_6f05172 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb80a0
        call esi
        test al, al
        mov ecx, ebp
        je public_6f051a6
        mov esi, dword ptr ds : [public_6fb3020]
        push 0
        call esi
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call esi
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f051ec
        mov dword ptr ss : [esp+0x1C], 0x7FFFFFFF
        jmp public_6f051ec
/*FIXUP public_6f051a6 : nop
        push offset public_6fb8090 @0x6f051a6*/
  FIXUP public_6f051a6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8090
        call esi
        test al, al
        mov ecx, ebp
        je public_6f051c7
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb8064]
        fstp dword ptr ss : [esp+0x20]
        jmp public_6f051ec
/*FIXUP public_6f051c7 : nop
        push offset public_6fb8084 @0x6f051c7*/
  FIXUP public_6f051c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8084
        call esi
        test al, al
        je public_6f051ec
        mov esi, dword ptr ds : [public_6fb3020]
        push 0
        mov ecx, ebp
        call esi
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call esi
        mov dword ptr ss : [esp+0x28], eax
        public_6f051ec : nop
        mov ecx, ebp
        call ebx
        test al, al
        jne public_6f05147
        xor edi, edi
        public_6f051fa : nop
        mov ecx, dword ptr ds : [public_6fd05dc]
        mov edx, dword ptr ds : [public_6fd05e0]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, ecx
        jae public_6f05349
        mov esi, dword ptr ds : [public_6fd05d8]
        cmp esi, edi
        je public_6f05261
        mov edx, ecx
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jbe public_6f05261
        mov edx, ecx
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        jmp public_6f05266
        public_6f05261 : nop
        mov ebp, 1
        public_6f05266 : nop
        cmp esi, edi
        jne public_6f0526e
        xor edx, edx
        jmp public_6f05281
        public_6f0526e : nop
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f05281 : nop
        lea eax, ds:[edx+ebp]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        jge public_6f0528e
        xor eax, eax
        public_6f0528e : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        mov edi, dword ptr ds : [public_6fd05d8]
        add esp, 4
        cmp edi, ebx
        mov ebp, eax
        mov esi, ebp
        je public_6f052c4
        nop 
        lea esp, ss:[esp]
        public_6f052b0 : nop
        push edi
        push esi
        call public_6eee7a0
        add edi, 0x18
        add esp, 8
        add esi, 0x18
        cmp edi, ebx
        jne public_6f052b0
        public_6f052c4 : nop
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push esi
        mov ecx, offset public_6fd05d4
        call public_6eee050
        mov ecx, dword ptr ds : [public_6fd05dc]
        add esi, 0x18
        push esi
        push ecx
        push ebx
        mov ecx, offset public_6fd05d4
        call public_6eee010
        mov edx, dword ptr ds : [public_6fd05dc]
        mov eax, dword ptr ds : [public_6fd05d8]
        push edx
        push eax
        mov ecx, offset public_6fd05d4
        call public_6ea1490
        mov ecx, dword ptr ds : [public_6fd05d8]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*2]
        lea eax, ss:[ebp+edx*8]
        add esp, 4
        mov ecx, offset public_6fd05d4
        mov dword ptr ds : [public_6fd05e0], eax
        call public_6eedfe0
        inc eax
        lea ecx, ds:[eax+eax*2]
        lea edx, ss:[ebp+ecx*8]
        mov dword ptr ds : [public_6fd05d8], ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [public_6fd05dc], edx
        jmp public_6f0541f
        public_6f05349 : nop
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f053c8
        lea edx, ds:[ebx+0x18]
        push edx
        push ecx
        push ebx
        mov ecx, offset public_6fd05d4
        call public_6eee010
        mov esi, dword ptr ds : [public_6fd05dc]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, offset public_6fd05d4
        call public_6eee050
        mov edx, dword ptr ds : [public_6fd05dc]
        cmp ebx, edx
        mov eax, ebx
        je public_6f05418
        public_6f053b2 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6f053b2
        jmp public_6f05418
        public_6f053c8 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE8
        push ecx
        mov ecx, offset public_6fd05d4
        call public_6eee010
        mov eax, dword ptr ds : [public_6fd05dc]
        mov edx, eax
        add eax, 0xFFFFFFE8
        cmp ebx, eax
        je public_6f053fb
        public_6f053e6 : nop
        sub eax, 0x18
        sub edx, 0x18
        cmp eax, ebx
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f053e6
        public_6f053fb : nop
        lea edx, ds:[ebx+0x18]
        cmp ebx, edx
        mov eax, ebx
        je public_6f05418
        public_6f05404 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6f05404
        public_6f05418 : nop
        add dword ptr ds : [public_6fd05dc], 0x18
        public_6f0541f : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f05100
        pop edi
        pop esi
        pop ebx
        public_6f05432 : nop
        pop ebp
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f050e0)
    }
}

#undef public_6f05100
#undef public_6f05147
#undef public_6f05172
#undef public_6f051a6
#undef public_6f051c7
#undef public_6f051ec
#undef public_6f051fa
#undef public_6f05261
#undef public_6f05266
#undef public_6f0526e
#undef public_6f05281
#undef public_6f0528e
#undef public_6f052b0
#undef public_6f052c4
#undef public_6f05349
#undef public_6f053b2
#undef public_6f053c8
#undef public_6f053e6
#undef public_6f053fb
#undef public_6f05404
#undef public_6f05418
#undef public_6f0541f
#undef public_6f05432
