#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_62732a0);
CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6275bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6275ee0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_6275c6d _public_6275c6d
#define public_6275ce6 _public_6275ce6
#define public_6275d04 _public_6275d04
#define public_6275d37 _public_6275d37
#define public_6275d8d _public_6275d8d
#define public_6275e3f _public_6275e3f
#define public_6275e50 _public_6275e50
#define public_6275e8c _public_6275e8c
#define public_6275ecb _public_6275ecb

PROC_DECLARE(0x6275bb0, internal_6275bb0, public_6275bb0);
extern "C" NAKED register_t __cdecl internal_6275bb0()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        push edi
        push 0
        mov ebx, ecx
        push 0
        lea ebp, ds:[ebx+0x1C8]
        push 0
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [ebp], 0
        lea esi, ss:[ebp+4]
        call public_628b030
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[esi+0xC]
        call public_62748a0
        mov edi, 0x420C0000
        mov esi, 0x3E800000
        mov dword ptr ss : [ebp+0x34], edi
        mov dword ptr ss : [ebp+0x38], esi
        mov dword ptr ss : [ebp+0x3C], 0x49742400
        mov eax, dword ptr ds : [ebx+0x1C4]
        test eax, eax
        jne public_6275c6d
        lea eax, ds:[ebx+0x1CC]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ds:[eax+0xC]
        call public_62748a0
        mov dword ptr ds : [ebx+0x1FC], edi
        pop edi
        mov dword ptr ds : [ebx+0x200], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x204], 0x49742400
        pop ebx
        add esp, 0x58
        ret 
        public_6275c6d : nop
        mov esi, dword ptr ds : [public_639902c]
/*FIXUP push offset public_639a92c @0x6275c73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a92c
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6275d37
        mov dword ptr ss : [esp+0x14], 0xBF804189
        mov dword ptr ss : [esp+0x18], 0x3FB58106
        mov dword ptr ss : [esp+0x1C], 0x4033A5E3
        mov dword ptr ss : [esp+0x44], 0x3F7C28F6
        mov dword ptr ss : [esp+0x50], 0xBAAA64C3
        mov dword ptr ss : [esp+0x5C], 0xBE3089A0
        mov dword ptr ss : [esp+0x48], 0xBCFC5048
        mov dword ptr ss : [esp+0x54], 0x3F7B8BAC
        mov dword ptr ss : [esp+0x60], 0xBE3B2FEC
        mov dword ptr ss : [esp+0x4C], 0x3E2DAB9F
        mov dword ptr ss : [esp+0x58], 0x3E3DBF48
        mov dword ptr ss : [esp+0x64], 0x3F77C84B
        public_6275ce6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+0x1CC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea esi, ss:[esp+0x44]
        public_6275d04 : nop
        lea edi, ds:[ebx+0x1D8]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1FC], 0x420C0000
        mov dword ptr ds : [ebx+0x200], 0x3E800000
        mov dword ptr ds : [ebx+0x204], 0x49742400
        pop ebx
        add esp, 0x58
        ret 
        public_6275d37 : nop
        mov edx, dword ptr ds : [ebx+0x1C4]
/*FIXUP push offset public_639a918 @0x6275d3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a918
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6275d8d
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x58], 0xBF800000
        mov dword ptr ss : [esp+0x64], eax
        jmp public_6275ce6
        public_6275d8d : nop
        mov edx, dword ptr ds : [ebx+0x1C4]
/*FIXUP push offset public_639a90c @0x6275d93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a90c
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6275e3f
        mov dword ptr ss : [esp+0x14], 0xC0343958
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[ebx+0x1CC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x18], 0x3F9851EC
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x1C], 0x409FF7CF
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x44], 0x3D252157
        mov dword ptr ss : [esp+0x48], 0xBDD2DCB1
        mov dword ptr ss : [esp+0x4C], 0xBF7E6E44
        mov dword ptr ss : [esp+0x38], 0xBE333DB0
        mov dword ptr ss : [esp+0x3C], 0x3F7A8390
        mov dword ptr ss : [esp+0x40], 0xBDDE2AC3
        mov dword ptr ss : [esp+0x2C], 0x3F7BD662
        mov dword ptr ss : [esp+0x30], 0x3E369EC3
        mov dword ptr ss : [esp+0x34], 0x3CAF8BDF
        call public_6275ee0
        mov esi, eax
        jmp public_6275d04
        public_6275e3f : nop
        lea ecx, ds:[ebx+0x134]
        xor edi, edi
        call public_626a600
        test eax, eax
        jle public_6275ecb
        public_6275e50 : nop
        mov edx, dword ptr ds : [ebx+0x138]
        mov esi, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x1C4]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_6275e8c
        lea ecx, ds:[ebx+0x134]
        inc edi
        call public_626a600
        cmp edi, eax
        jl public_6275e50
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        public_6275e8c : nop
        push ebp
        call public_6334430
        add esp, 4
        mov ecx, ebp
        call public_62732a0
        mov edx, dword ptr ds : [esi]
        push edx
        push ebp
        call public_6334400
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        add esi, 4
        lea edi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [ebp+0x34], ecx
        mov edx, dword ptr ds : [eax+0x38]
        mov dword ptr ss : [ebp+0x38], edx
        mov eax, dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [ebp+0x3C], eax
        public_6275ecb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x6275bb0)
    }
}

#undef public_6275c6d
#undef public_6275ce6
#undef public_6275d04
#undef public_6275d37
#undef public_6275d8d
#undef public_6275e3f
#undef public_6275e50
#undef public_6275e8c
#undef public_6275ecb
