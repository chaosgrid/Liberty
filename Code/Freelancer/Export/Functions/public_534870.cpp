#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52ced0);
CLANG_FORWARD_PROC_SYMBOL(public_52cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5357f0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0938);

#define public_5348b0 _public_5348b0
#define public_534910 _public_534910
#define public_534930 _public_534930
#define public_534957 _public_534957
#define public_534959 _public_534959
#define public_534980 _public_534980
#define public_5349a8 _public_5349a8
#define public_5349fe _public_5349fe
#define public_534a07 _public_534a07
#define public_534a20 _public_534a20
#define public_534a37 _public_534a37
#define public_534a47 _public_534a47
#define public_534ab3 _public_534ab3
#define public_534abd _public_534abd
#define public_534ad9 _public_534ad9
#define public_534ae7 _public_534ae7
#define public_534b14 _public_534b14
#define public_534b2d _public_534b2d
#define public_534b61 _public_534b61
#define public_534b93 _public_534b93
#define public_534b95 _public_534b95
#define public_534bb2 _public_534bb2
#define public_534bc5 _public_534bc5
#define public_534c6c _public_534c6c
#define public_534c9c _public_534c9c
#define public_534caf _public_534caf
#define public_534cb7 _public_534cb7
#define public_534cc5 _public_534cc5
#define public_534cd4 _public_534cd4
#define public_534ce9 _public_534ce9
#define public_534d01 _public_534d01
#define public_534d26 _public_534d26
#define public_534d70 _public_534d70
#define public_534dd8 _public_534dd8
#define public_534de5 _public_534de5
#define public_534e1e _public_534e1e
#define public_534e3f _public_534e3f

PROC_DECLARE(0x534870, internal_534870, public_534870);
extern "C" NAKED register_t __cdecl internal_534870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0938 @0x534872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0938
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xD0]
        xor ebx, ebx
        cmp esi, 0xFFFFFFFF
        push edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebx
        je public_5348b0
        call public_54bb00
        cmp esi, eax
        jne public_534b2d
        public_5348b0 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x50], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x54], 0x7F7FFFFF
        call dword ptr ds : [public_5c6998]
        mov edx, dword ptr ss : [ebp-4]
        lea edi, ss:[ebp-4]
        mov ecx, edi
        mov dword ptr ss : [esp+0xC0], ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0xD0]
        cmp eax, ebx
        je public_534910
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        public_534910 : nop
        mov eax, dword ptr ss : [esp+0xCC]
        cmp eax, ebx
        jbe public_534a37
        mov ebp, dword ptr ss : [esp+0xC8]
        mov dword ptr ss : [esp+0x1C], eax
        lea ebx, ds:[ebx]
        public_534930 : nop
        test edi, edi
        mov cx, word ptr ss : [ebp]
        je public_534957
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_534957
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_534957
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_534959
        public_534957 : nop
        xor eax, eax
        public_534959 : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov esi, eax
        mov eax, dword ptr ds : [edi+0xB8]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_534a20
        lea esp, ss:[esp]
        public_534980 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [eax+4], esi
        je public_5349a8
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_53ab20
        mov eax, dword ptr ds : [edi+0xB8]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        jne public_534980
        jmp public_534a20
        public_5349a8 : nop
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        je public_534a20
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_534a20
        push eax
        call dword ptr ds : [public_5c6538]
        mov ecx, dword ptr ss : [esp+0xD4]
        add esp, 4
        test ecx, ecx
        je public_5349fe
        mov eax, dword ptr ds : [eax+0x4C]
        mov cl, byte ptr ds : [eax+0x79]
        test cl, cl
        jne public_5349fe
        mov eax, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov bl, al
        test bl, bl
        je public_534a20
        mov ecx, dword ptr ss : [esp+0x5C]
        push ebp
        push 1
        push ecx
        lea ecx, ss:[esp+0x60]
        call dword ptr ds : [public_5c6898]
        jmp public_534a07
        public_5349fe : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov bl, al
        public_534a07 : nop
        test bl, bl
        je public_534a20
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 0xA
        jae public_534a20
        mov dword ptr ss : [esp+eax*4+0x84], esi
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        public_534a20 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 2
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_534930
        jmp public_534ae7
        public_534a37 : nop
        mov eax, dword ptr ss : [ebp+0xB4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_534ae7
        public_534a47 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call dword ptr ds : [public_5c6538]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_534ad9
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        je public_534ad9
        mov eax, dword ptr ss : [esp+0xD0]
        test eax, eax
        je public_534ab3
        mov eax, dword ptr ds : [edi+0x4C]
        mov cl, byte ptr ds : [eax+0x79]
        test cl, cl
        jne public_534ab3
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0xD0]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        mov bl, al
        test bl, bl
        je public_534ad9
        mov ecx, dword ptr ss : [esp+0x5C]
        movzx edi, word ptr ds : [edi+8]
        lea eax, ss:[esp+0x20]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_5c6898]
        jmp public_534abd
        public_534ab3 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov bl, al
        public_534abd : nop
        test bl, bl
        je public_534ad9
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 0xA
        jae public_534ad9
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+eax*4+0x84], ecx
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        public_534ad9 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xB4]
        jne public_534a47
        public_534ae7 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        test ecx, ecx
        je public_534b14
        mov eax, dword ptr ss : [esp+0x5C]
        sub eax, ecx
        sar eax, 1
        test eax, eax
        je public_534b14
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x44]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x58]
        public_534b14 : nop
        push ecx
        mov dword ptr ss : [esp+0xC4], 0xFFFFFFFF
        call public_5b7e1d
        add esp, 4
        jmp public_534d01
        public_534b2d : nop
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x3C], eax
        cmp dword ptr ss : [esp+0xCC], ebx
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x18], ebx
        jbe public_534d01
        add ebp, 0xFFFFFFFC
        public_534b61 : nop
        test ebp, ebp
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xC8]
        mov cx, word ptr ds : [eax+edx*2]
        je public_534b93
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_534b93
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_534b93
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_534b95
        public_534b93 : nop
        xor eax, eax
        public_534b95 : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov edx, dword ptr ss : [ebp+0xB8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_534ce9
        public_534bb2 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [esi+4], eax
        je public_534bc5
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_534bb2
        jmp public_534ce9
        public_534bc5 : nop
        mov ebx, dword ptr ds : [ecx+8]
        test ebx, ebx
        je public_534ce9
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_534ce9
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_534caf
        mov eax, dword ptr ds : [ebx+4]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        call public_5357f0
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_534cb7
        push esi
        call dword ptr ds : [public_5c6544]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_534cc5
        mov ecx, esi
        call dword ptr ds : [public_5c6548]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        jne public_534cc5
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6994]
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_534c9c
        lea esi, ds:[eax+8]
        mov eax, dword ptr ds : [public_675540]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x44]
        rep movsd
        jne public_534c6c
        call public_5b73e0
        mov dword ptr ds : [public_675540], eax
        public_534c6c : nop
        mov edx, dword ptr ss : [esp+0xD0]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        public_534c9c : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x17], 1
        call dword ptr ds : [eax+0x14]
        jmp public_534cd4
        public_534caf : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_534cc5
        public_534cb7 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x14]
        jmp public_534cd4
        public_534cc5 : nop
        mov eax, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        public_534cd4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 0xA
        jae public_534ce9
        mov dword ptr ss : [esp+eax*4+0x84], ebx
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        public_534ce9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xCC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jb public_534b61
        public_534d01 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jbe public_534e3f
        mov ebx, dword ptr ds : [public_5c68c4]
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x18], ecx
        public_534d26 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_534e1e
        mov ebp, eax
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, esi
        call ebx
        mov edi, eax
        push 0
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], edi
        call dword ptr ds : [public_5c68b8]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, ebp
        call public_52cf80
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, ebp
        cmp eax, edx
        jae public_534de5
        public_534d70 : nop
        mov esi, dword ptr ss : [esp+ebp*4+0x84]
        test esi, esi
        je public_534dd8
        lea eax, ss:[esp+0x80]
        push eax
        mov ecx, esi
        call public_52cf80
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, dword ptr ds : [eax]
        jne public_534dd8
        mov esi, dword ptr ds : [esi+4]
        mov ecx, esi
        call ebx
        push 0
        lea edx, ss:[esp+0xB0]
        push edx
        mov ecx, esi
        add edi, eax
        call dword ptr ds : [public_5c68b8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax]
        mov dword ptr ss : [esp+ebp*4+0x84], 0
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x2C]
        public_534dd8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ebp
        cmp ebp, eax
        jb public_534d70
        mov dword ptr ss : [esp+0x34], edi
        public_534de5 : nop
        fild dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        lea eax, ss:[esp+0x28]
        fdivr dword ptr ds : [public_5c75dc]
        push eax
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        call public_52ced0
        public_534e1e : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, 4
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        dec eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], esi
        jb public_534d26
        public_534e3f : nop
        mov ecx, dword ptr ss : [esp+0xB8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB4
        ret 0x10
        UNREACHABLE_TRAP(0x534870)
    }
}

#undef public_5348b0
#undef public_534910
#undef public_534930
#undef public_534957
#undef public_534959
#undef public_534980
#undef public_5349a8
#undef public_5349fe
#undef public_534a07
#undef public_534a20
#undef public_534a37
#undef public_534a47
#undef public_534ab3
#undef public_534abd
#undef public_534ad9
#undef public_534ae7
#undef public_534b14
#undef public_534b2d
#undef public_534b61
#undef public_534b93
#undef public_534b95
#undef public_534bb2
#undef public_534bc5
#undef public_534c6c
#undef public_534c9c
#undef public_534caf
#undef public_534cb7
#undef public_534cc5
#undef public_534cd4
#undef public_534ce9
#undef public_534d01
#undef public_534d26
#undef public_534d70
#undef public_534dd8
#undef public_534de5
#undef public_534e1e
#undef public_534e3f
