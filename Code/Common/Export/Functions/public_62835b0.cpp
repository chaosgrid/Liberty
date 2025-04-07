#include "Common-PCH.h"

PROC_DECLARE(0x62835b0, internal_62835b0, public_62835b0);
extern "C" NAKED register_t __cdecl internal_62835b0()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ss : [esp+4]
        push esi
        push edi
        lea esi, ds:[edx+0x10]
        lea edi, ds:[eax+0x10]
        mov ecx, 9
        rep movsd
        lea esi, ds:[edx+0x38]
        lea edi, ds:[eax+0x38]
        mov ecx, 6
        rep movsd
        lea ecx, ds:[edx+0x50]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x50]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x5C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x5C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x68]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x68]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x74]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x74]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x80]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x80]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x8C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x8C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x98]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x98]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0xA4]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0xA4]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0xB0]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0xB0]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0xBC]
        mov dword ptr ds : [eax+0xBC], ecx
        mov ecx, dword ptr ds : [edx+0xC0]
        mov dword ptr ds : [eax+0xC0], ecx
        mov ecx, dword ptr ds : [edx+0xC4]
        mov dword ptr ds : [eax+0xC4], ecx
        mov ecx, dword ptr ds : [edx+0xC8]
        mov dword ptr ds : [eax+0xC8], ecx
        mov ecx, dword ptr ds : [edx+0xCC]
        mov dword ptr ds : [eax+0xCC], ecx
        mov ecx, dword ptr ds : [edx+0xD0]
        mov dword ptr ds : [eax+0xD0], ecx
        mov ecx, dword ptr ds : [edx+0xD4]
        mov dword ptr ds : [eax+0xD4], ecx
        mov dword ptr ds : [eax+8], offset public_639b98c
        lea esi, ds:[edx+0xE0]
        lea edi, ds:[eax+0xE0]
        mov ecx, 9
        rep movsd
        lea esi, ds:[edx+0x108]
        lea edi, ds:[eax+0x108]
        mov ecx, 6
        rep movsd
        lea ecx, ds:[edx+0x120]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x120]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x12C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x12C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x138]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x138]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x144]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x144]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x150]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x150]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x15C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x15C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x168]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x168]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x174]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x174]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x180]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x180]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0x18C]
        mov dword ptr ds : [eax+0x18C], ecx
        mov ecx, dword ptr ds : [edx+0x190]
        mov dword ptr ds : [eax+0x190], ecx
        mov ecx, dword ptr ds : [edx+0x194]
        mov dword ptr ds : [eax+0x194], ecx
        mov ecx, dword ptr ds : [edx+0x198]
        mov dword ptr ds : [eax+0x198], ecx
        mov ecx, dword ptr ds : [edx+0x19C]
        mov dword ptr ds : [eax+0x19C], ecx
        mov ecx, dword ptr ds : [edx+0x1A0]
        mov dword ptr ds : [eax+0x1A0], ecx
        mov ecx, dword ptr ds : [edx+0x1A4]
        mov dword ptr ds : [eax+0x1A4], ecx
        mov dword ptr ds : [eax+0xD8], offset public_639b98c
        lea esi, ds:[edx+0x1B0]
        lea edi, ds:[eax+0x1B0]
        mov ecx, 9
        rep movsd
        lea esi, ds:[edx+0x1D8]
        lea edi, ds:[eax+0x1D8]
        mov ecx, 6
        rep movsd
        lea ecx, ds:[edx+0x1F0]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x1F0]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x1FC]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x1FC]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x208]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x208]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x214]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x214]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x220]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x220]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x22C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x22C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x238]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x238]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x244]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x244]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x250]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x250]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0x25C]
        mov dword ptr ds : [eax+0x25C], ecx
        mov ecx, dword ptr ds : [edx+0x260]
        mov dword ptr ds : [eax+0x260], ecx
        mov ecx, dword ptr ds : [edx+0x264]
        mov dword ptr ds : [eax+0x264], ecx
        mov ecx, dword ptr ds : [edx+0x268]
        mov dword ptr ds : [eax+0x268], ecx
        mov ecx, dword ptr ds : [edx+0x26C]
        mov dword ptr ds : [eax+0x26C], ecx
        mov ecx, dword ptr ds : [edx+0x270]
        mov dword ptr ds : [eax+0x270], ecx
        mov ecx, dword ptr ds : [edx+0x274]
        mov dword ptr ds : [eax+0x274], ecx
        mov dword ptr ds : [eax+0x1A8], offset public_639b98c
        lea ecx, ds:[edx+0x278]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x278]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x284]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x284]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x290]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x290]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x29C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x29C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        lea ecx, ds:[edx+0x2AC]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x2AC]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0x2B8]
        mov dword ptr ds : [eax+0x2B8], ecx
        mov ecx, dword ptr ds : [edx+0x2C0]
        mov dword ptr ds : [eax+0x2C0], ecx
        mov ecx, dword ptr ds : [edx+0x2C4]
        mov dword ptr ds : [eax+0x2C4], ecx
        mov ecx, dword ptr ds : [edx+0x2C8]
        mov dword ptr ds : [eax+0x2C8], ecx
        mov ecx, dword ptr ds : [edx+0x2CC]
        mov dword ptr ds : [eax+0x2CC], ecx
        mov ecx, dword ptr ds : [edx+0x2D0]
        mov dword ptr ds : [eax+0x2D0], ecx
        mov ecx, dword ptr ds : [edx+0x2D4]
        mov dword ptr ds : [eax+0x2D4], ecx
        mov ecx, dword ptr ds : [edx+0x2D8]
        mov dword ptr ds : [eax+0x2D8], ecx
        mov ecx, dword ptr ds : [edx+0x2DC]
        mov dword ptr ds : [eax+0x2DC], ecx
        mov dl, byte ptr ds : [edx+0x2E0]
        pop edi
        mov byte ptr ds : [eax+0x2E0], dl
        mov dword ptr ds : [eax], offset public_639b994
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62835b0)
    }
}
